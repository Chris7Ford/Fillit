/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 10:18:57 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/17 20:33:13 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		read_next_line(int fd)
{
	char	*line;
	int		ret;

	ret = get_next_line(fd, &line);
	if (ret == -1)
		return (ERROR);
	if (ret == 1 && line[0] != '\0')
	{
		free(line);
		return (FAIL);
	}
	if (ret == 0)
	{
		free(line);
		return (END_OF_FILE);
	}
	free(line);
	return (OK);
}

int		read_shape(char tetrimino_lines[LINES_AMOUNT][LINE_LENGTH], int fd)
{
	char	*line;
	int		ret;
	int		i;

	i = 0;
	while (i < LINES_AMOUNT)
	{
		ret = get_next_line(fd, &line);
		if (ret == -1)
			return (ERROR);
		if (ret == 0)
		{
			free(line);
			return (FAIL);
		}
		if (ft_strlen(line) != LINE_LENGTH)
			return (FAIL);
		ft_strcpy(tetrimino_lines[i], line);
		free(line);
		i++;
	}
	return (ret);
}

int		read_tetriminos(char *file, t_tetrimino *tetrimino_array,
		t_tetrimino *tetrimino_shapes)
{
	t_point			diff[3];
	t_point			index;
	char			tetrimino_lines[LINES_AMOUNT][LINE_LENGTH];
	int				ret;
	int				fd;

	index.x = 0;
	if ((fd = open(file, O_RDONLY)) < 0)
		return (FAIL);
	ret = OK;
	while (ret && (ret = read_shape(tetrimino_lines, fd)))
	{
		if (ret == ERROR || index.x == MAX_TETRIMINOS)
			return (ERROR);
		else if (ret == FAIL || !valid_input(tetrimino_lines, diff))
			return (FAIL);
		if ((index.y = recognize_tetrimino(tetrimino_shapes, diff)) == FAIL)
			return (FAIL);
		tetrimino_array[(index.x)++] = tetrimino_shapes[index.y];
		if ((ret = read_next_line(fd)) < 0)
			return (ret);
	}
	if (close(fd) < 0)
		return (ERROR);
	return (index.x);
}
