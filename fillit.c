/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 20:37:32 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/18 15:18:06 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	reset_lines(t_tetrimino *tetrimino)
{
	int		i;

	i = 0;
	while (i < LINES_AMOUNT)
	{
		tetrimino->lines[i] = tetrimino->original[i];
		i++;
	}
}

void	shift_lines(t_tetrimino *tetrimino)
{
	int		i;

	i = 0;
	while (i < LINES_AMOUNT)
	{
		tetrimino->lines[i] >>= 1;
		i++;
	}
}

int		check_lines(t_tetrimino tetrimino, t_grid grid)
{
	int				i;
	int				j;

	i = 0;
	j = grid.y;
	while (i < LINES_AMOUNT)
	{
		if (tetrimino.lines[i] & grid.lines[j])
			return (FALSE);
		i++;
		j++;
	}
	return (OK);
}

int		fillit1(t_grid grid, t_size *count, t_tetrimino *tetrimino_array, int i)
{
	if (i == count->array_length)
		return (OK);
	grid.x = 0;
	grid.y = 0;
	while (grid.y < count->square_size)
	{
		while (grid.x < count->square_size)
		{
			if (check_lines(tetrimino_array[i], grid))
			{
				fill_grid(&grid, &(tetrimino_array[i]));
				if (fillit1(grid, count, tetrimino_array, i + 1))
					return (OK);
				unfill_grid(&grid, tetrimino_array[i], count->square_size);
			}
			shift_lines(&tetrimino_array[i]);
			(grid.x)++;
		}
		reset_lines(&tetrimino_array[i]);
		grid.x = 0;
		(grid.y)++;
	}
	return (FALSE);
}

int		fillit2(t_grid grid, t_size *count, t_tetrimino *tetrimino_array, int i)
{
	if (i == count->array_length)
		return (OK);
	grid.x = 0;
	grid.y = 0;
	while (grid.y < count->square_size)
	{
		while (grid.x < count->square_size)
		{
			if (check_lines(tetrimino_array[i], grid))
			{
				fill_grid(&grid, &(tetrimino_array[i]));
				if (fillit2(grid, count, tetrimino_array, i + 1))
					return (OK);
				unfill_grid(&grid, tetrimino_array[i], count->square_size);
				reset_lines(&tetrimino_array[i]);
				return (FALSE);
			}
			shift_lines(&tetrimino_array[i]);
			(grid.x)++;
		}
		reset_lines(&tetrimino_array[i]);
		grid.x = 0;
		(grid.y)++;
	}
	return (FALSE);
}
