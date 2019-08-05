/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 20:39:06 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/18 08:39:16 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		greedy_choice(t_tetrimino *tetrimino_array, int array_length)
{
	int		i;

	i = 0;
	while (i < array_length - 1)
	{
		if (tetrimino_array[i].id != tetrimino_array[i + 1].id)
			return (FILLIT_1);
		i++;
	}
	return (FILLIT_2);
}

t_grid	solve_square(t_tetrimino *tetrimino_array, t_size *size)
{
	t_grid	grid;
	int		(*fillit_ptr)(t_grid, t_size *, t_tetrimino *, int);
	int		smallest_size;

	smallest_size = 2;
	while (smallest_size * smallest_size < size->array_length * 4)
		smallest_size++;
	size->square_size = smallest_size;
	initialize_grid(&grid, smallest_size);
	fillit_ptr = greedy_choice(tetrimino_array, size->array_length)
		== FILLIT_1 ? &fillit1 : &fillit2;
	while (fillit_ptr(grid, size, tetrimino_array, 0) == FALSE)
	{
		shift_borders(&grid, size->square_size);
		(size->square_size)++;
	}
	return (grid);
}

void	initialize_square(char square[MAX][MAX])
{
	int		i;
	int		j;

	i = 0;
	while (i < MAX)
	{
		j = 0;
		while (j < MAX)
		{
			square[i][j] = '.';
			j++;
		}
		i++;
	}
}

void	fill_square(char square[MAX][MAX],
		t_tetrimino *tet_array, t_size size)
{
	t_point	place;
	t_point	diff;
	int		i;
	int		j;

	i = 0;
	while (i < size.array_length)
	{
		place.y = tet_array[i].placement_point.y + tet_array[i].first_block.y;
		place.x = tet_array[i].placement_point.x + tet_array[i].first_block.x;
		square[place.y][place.x] = 'A' + i;
		j = 0;
		while (j < DIFF_POINTS)
		{
			diff = tet_array[i].diff[j];
			square[place.y + diff.y][place.x + diff.x] = 'A' + i;
			j++;
		}
		i++;
	}
}

int		print_square(t_size size, t_tetrimino *tetrimino_array)
{
	char	square[MAX][MAX];
	int		i;

	initialize_square(square);
	fill_square(square, tetrimino_array, size);
	i = 0;
	while (i < size.square_size)
	{
		write(STD_OUT, square[i], size.square_size);
		write(STD_OUT, "\n", 1);
		i++;
	}
	i = 0;
	return (OK);
}
