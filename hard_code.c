/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_code.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 12:02:24 by chford            #+#    #+#             */
/*   Updated: 2019/03/16 15:30:06 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	hard_code_to_the_left(t_tetrimino *tetriminos)
{
	int		i;
	int		j;

	i = 0;
	while (i < TETRIMINOS_AMOUNT)
	{
		j = 0;
		while (j < LINES_AMOUNT)
		{
			tetriminos[i].original[j] <<= 12;
			j++;
		}
		i++;
	}
}

void	hard_code_tetriminos_lines(t_tetrimino *tetriminos)
{
	int		i;
	int		j;

	i = 0;
	while (i < TETRIMINOS_AMOUNT)
	{
		j = 0;
		while (j < LINES_AMOUNT)
		{
			tetriminos[i].lines[j] = tetriminos[i].original[j];
			j++;
		}
		i++;
	}
}

void	hard_code_tetriminos(t_tetrimino *tetriminos)
{
	hard_code_tetrimino_01(tetriminos);
	hard_code_tetrimino_02(tetriminos);
	hard_code_tetrimino_03(tetriminos);
	hard_code_tetrimino_04(tetriminos);
	hard_code_tetrimino_05(tetriminos);
	hard_code_tetrimino_06(tetriminos);
	hard_code_tetrimino_07(tetriminos);
	hard_code_tetrimino_08(tetriminos);
	hard_code_tetrimino_09(tetriminos);
	hard_code_tetrimino_10(tetriminos);
	hard_code_tetrimino_11(tetriminos);
	hard_code_tetrimino_12(tetriminos);
	hard_code_tetrimino_13(tetriminos);
	hard_code_tetrimino_14(tetriminos);
	hard_code_tetrimino_15(tetriminos);
	hard_code_tetrimino_16(tetriminos);
	hard_code_tetrimino_17(tetriminos);
	hard_code_tetrimino_18(tetriminos);
	hard_code_tetrimino_19(tetriminos);
	hard_code_to_the_left(tetriminos);
	hard_code_tetriminos_lines(tetriminos);
}
