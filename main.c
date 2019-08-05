/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 09:59:58 by chford            #+#    #+#             */
/*   Updated: 2019/03/18 15:42:26 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	t_tetrimino	tetrimino_shapes[TETRIMINOS_AMOUNT];
	t_tetrimino	tetrimino_array[MAX_TETRIMINOS];
	t_size		size;
	int			ret;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (0);
	}
	hard_code_tetriminos(tetrimino_shapes);
	ret = read_tetriminos(argv[1], tetrimino_array, tetrimino_shapes);
	if (ret == FAIL || ret == ERROR)
	{
		write(1, "error\n", 6);
		return (0);
	}
	size.array_length = ret;
	solve_square(tetrimino_array, &size);
	if (!print_square(size, tetrimino_array))
		return (1);
	return (0);
}
