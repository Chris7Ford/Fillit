/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 20:37:23 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/18 10:11:20 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	initialize_grid(t_grid *grid, int smallest_size)
{
	int		i;

	i = 0;
	while (i < MAX)
		grid->lines[i++] = ALL_ONES;
	i = 0;
	while (i < smallest_size)
		grid->lines[i++] >>= smallest_size;
	grid->x = 0;
	grid->y = 0;
}

void	fill_grid(t_grid *grid, t_tetrimino *tetrimino)
{
	int		i;
	int		j;

	tetrimino->placement_point.y = grid->y;
	tetrimino->placement_point.x = grid->x;
	i = tetrimino->placement_point.y;
	j = 0;
	while (j < LINES_AMOUNT)
	{
		grid->lines[i] |= tetrimino->lines[j];
		i++;
		j++;
	}
}

void	unfill_grid(t_grid *grid, t_tetrimino tetrimino, int square_size)
{
	unsigned short	inverted_line;
	int				i;
	int				j;

	i = tetrimino.placement_point.y;
	j = 0;
	while (j < LINES_AMOUNT)
	{
		inverted_line = ~tetrimino.lines[j] | (ALL_ONES >> square_size);
		grid->lines[i] &= inverted_line;
		i++;
		j++;
	}
}

void	shift_borders(t_grid *grid, int square_size)
{
	int		i;

	i = 0;
	while (i < square_size)
		grid->lines[i++] >>= 1;
	grid->lines[i] >>= (square_size + 1);
}
