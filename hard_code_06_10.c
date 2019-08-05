/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_code_01-05.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 11:22:29 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/16 17:26:15 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	hard_code_tetrimino_06(t_tetrimino *tetriminos)
{
	tetriminos[5].id = 5;
	tetriminos[5].original[0] = B1100;
	tetriminos[5].original[1] = B1000;
	tetriminos[5].original[2] = B1000;
	tetriminos[5].original[3] = B0000;
	tetriminos[5].first_block.y = 0;
	tetriminos[5].first_block.x = 0;
	tetriminos[5].diff[0].y = 0;
	tetriminos[5].diff[0].x = 1;
	tetriminos[5].diff[1].y = 1;
	tetriminos[5].diff[1].x = 0;
	tetriminos[5].diff[2].y = 2;
	tetriminos[5].diff[2].x = 0;
}

void	hard_code_tetrimino_07(t_tetrimino *tetriminos)
{
	tetriminos[5].id = 6;
	tetriminos[6].original[0] = B1100;
	tetriminos[6].original[1] = B0110;
	tetriminos[6].original[2] = B0000;
	tetriminos[6].original[3] = B0000;
	tetriminos[6].first_block.y = 0;
	tetriminos[6].first_block.x = 0;
	tetriminos[6].diff[0].y = 0;
	tetriminos[6].diff[0].x = 1;
	tetriminos[6].diff[1].y = 1;
	tetriminos[6].diff[1].x = 1;
	tetriminos[6].diff[2].y = 1;
	tetriminos[6].diff[2].x = 2;
}

void	hard_code_tetrimino_08(t_tetrimino *tetriminos)
{
	tetriminos[7].id = 7;
	tetriminos[7].original[0] = B1100;
	tetriminos[7].original[1] = B0100;
	tetriminos[7].original[2] = B0100;
	tetriminos[7].original[3] = B0000;
	tetriminos[7].first_block.y = 0;
	tetriminos[7].first_block.x = 0;
	tetriminos[7].diff[0].y = 0;
	tetriminos[7].diff[0].x = 1;
	tetriminos[7].diff[1].y = 1;
	tetriminos[7].diff[1].x = 1;
	tetriminos[7].diff[2].y = 2;
	tetriminos[7].diff[2].x = 1;
}

void	hard_code_tetrimino_09(t_tetrimino *tetriminos)
{
	tetriminos[8].id = 8;
	tetriminos[8].original[0] = B1000;
	tetriminos[8].original[1] = B1110;
	tetriminos[8].original[2] = B0000;
	tetriminos[8].original[3] = B0000;
	tetriminos[8].first_block.y = 0;
	tetriminos[8].first_block.x = 0;
	tetriminos[8].diff[0].y = 1;
	tetriminos[8].diff[0].x = 0;
	tetriminos[8].diff[1].y = 1;
	tetriminos[8].diff[1].x = 1;
	tetriminos[8].diff[2].y = 1;
	tetriminos[8].diff[2].x = 2;
}

void	hard_code_tetrimino_10(t_tetrimino *tetriminos)
{
	tetriminos[9].id = 9;
	tetriminos[9].original[0] = B1000;
	tetriminos[9].original[1] = B1100;
	tetriminos[9].original[2] = B1000;
	tetriminos[9].original[3] = B0000;
	tetriminos[9].first_block.y = 0;
	tetriminos[9].first_block.x = 0;
	tetriminos[9].diff[0].y = 1;
	tetriminos[9].diff[0].x = 0;
	tetriminos[9].diff[1].y = 1;
	tetriminos[9].diff[1].x = 1;
	tetriminos[9].diff[2].y = 2;
	tetriminos[9].diff[2].x = 0;
}
