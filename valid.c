/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 10:58:33 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/16 18:59:59 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point		do_block(int first, t_point *first_block, int i, int j)
{
	t_point		diff;
	t_point		input_index;

	input_index.y = i;
	input_index.x = j;
	diff.y = 0;
	diff.x = 0;
	if (first == TRUE)
	{
		first_block->y = input_index.y;
		first_block->x = input_index.x;
	}
	else
	{
		diff.y = input_index.y - first_block->y;
		diff.x = input_index.x - first_block->x;
	}
	return (diff);
}

int			valid_input(char input[LINES_AMOUNT][LINE_LENGTH], t_point *diff)
{
	t_point		first_block;
	int			blocks_count;
	int			i;
	int			j;

	blocks_count = 0;
	i = 0;
	while (i < LINES_AMOUNT)
	{
		j = 0;
		while (j < LINE_LENGTH)
		{
			if (input[i][j] == BLOCK_CHAR && blocks_count++ == 0)
				do_block(TRUE, &first_block, i, j);
			else if (input[i][j] == BLOCK_CHAR && blocks_count <= T_SIZE)
				diff[blocks_count - 2] = do_block(FALSE, &first_block, i, j);
			else if (input[i][j] != EMPTY_CHAR)
				return (FALSE);
			if (i > LINES_AMOUNT || j > LINE_LENGTH || blocks_count > T_SIZE)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

int			recognize_tetrimino(t_tetrimino *tetriminos, t_point *diff)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (i < TETRIMINOS_AMOUNT)
	{
		j = 0;
		while (j < 3)
		{
			if (diff[j].x != tetriminos[i].diff[j].x ||
					diff[j].y != tetriminos[i].diff[j].y)
				break ;
			j++;
		}
		if (j == 3)
		{
			return (i);
			break ;
		}
		i++;
	}
	return (FAIL);
}
