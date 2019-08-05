/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_code_16-19.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 18:08:59 by chford            #+#    #+#             */
/*   Updated: 2019/03/16 18:09:01 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	hard_code_tetrimino_16(t_tetrimino *tetriminos)
{
	tetriminos[15].id = 15;
	tetriminos[15].original[0] = B0100;
	tetriminos[15].original[1] = B1100;
	tetriminos[15].original[2] = B1000;
	tetriminos[15].original[3] = B0000;
	tetriminos[15].first_block.y = 0;
	tetriminos[15].first_block.x = 1;
	tetriminos[15].diff[0].y = 1;
	tetriminos[15].diff[0].x = -1;
	tetriminos[15].diff[1].y = 1;
	tetriminos[15].diff[1].x = 0;
	tetriminos[15].diff[2].y = 2;
	tetriminos[15].diff[2].x = -1;
}

void	hard_code_tetrimino_17(t_tetrimino *tetriminos)
{
	tetriminos[16].id = 16;
	tetriminos[16].original[0] = B0100;
	tetriminos[16].original[1] = B1100;
	tetriminos[16].original[2] = B0100;
	tetriminos[16].original[3] = B0000;
	tetriminos[16].first_block.y = 0;
	tetriminos[16].first_block.x = 1;
	tetriminos[16].diff[0].y = 1;
	tetriminos[16].diff[0].x = -1;
	tetriminos[16].diff[1].y = 1;
	tetriminos[16].diff[1].x = 0;
	tetriminos[16].diff[2].y = 2;
	tetriminos[16].diff[2].x = 0;
}

void	hard_code_tetrimino_18(t_tetrimino *tetriminos)
{
	tetriminos[17].id = 17;
	tetriminos[17].original[0] = B0100;
	tetriminos[17].original[1] = B0100;
	tetriminos[17].original[2] = B1100;
	tetriminos[17].original[3] = B0000;
	tetriminos[17].first_block.y = 0;
	tetriminos[17].first_block.x = 1;
	tetriminos[17].diff[0].y = 1;
	tetriminos[17].diff[0].x = 0;
	tetriminos[17].diff[1].y = 2;
	tetriminos[17].diff[1].x = -1;
	tetriminos[17].diff[2].y = 2;
	tetriminos[17].diff[2].x = 0;
}

void	hard_code_tetrimino_19(t_tetrimino *tetriminos)
{
	tetriminos[18].id = 18;
	tetriminos[18].original[0] = B0010;
	tetriminos[18].original[1] = B1110;
	tetriminos[18].original[2] = B0000;
	tetriminos[18].original[3] = B0000;
	tetriminos[18].first_block.y = 0;
	tetriminos[18].first_block.x = 2;
	tetriminos[18].diff[0].y = 1;
	tetriminos[18].diff[0].x = -2;
	tetriminos[18].diff[1].y = 1;
	tetriminos[18].diff[1].x = -1;
	tetriminos[18].diff[2].y = 1;
	tetriminos[18].diff[2].x = 0;
}
