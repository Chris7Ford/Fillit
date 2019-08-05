/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_code_01-05.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 11:22:29 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/16 17:26:37 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	hard_code_tetrimino_01(t_tetrimino *tetriminos)
{
	tetriminos[0].id = 0;
	tetriminos[0].original[0] = B1111;
	tetriminos[0].original[1] = B0000;
	tetriminos[0].original[2] = B0000;
	tetriminos[0].original[3] = B0000;
	tetriminos[0].first_block.y = 0;
	tetriminos[0].first_block.x = 0;
	tetriminos[0].diff[0].y = 0;
	tetriminos[0].diff[0].x = 1;
	tetriminos[0].diff[1].y = 0;
	tetriminos[0].diff[1].x = 2;
	tetriminos[0].diff[2].y = 0;
	tetriminos[0].diff[2].x = 3;
}

void	hard_code_tetrimino_02(t_tetrimino *tetriminos)
{
	tetriminos[1].id = 1;
	tetriminos[1].original[0] = B1110;
	tetriminos[1].original[1] = B1000;
	tetriminos[1].original[2] = B0000;
	tetriminos[1].original[3] = B0000;
	tetriminos[1].first_block.y = 0;
	tetriminos[1].first_block.x = 0;
	tetriminos[1].diff[0].y = 0;
	tetriminos[1].diff[0].x = 1;
	tetriminos[1].diff[1].y = 0;
	tetriminos[1].diff[1].x = 2;
	tetriminos[1].diff[2].y = 1;
	tetriminos[1].diff[2].x = 0;
}

void	hard_code_tetrimino_03(t_tetrimino *tetriminos)
{
	tetriminos[2].id = 2;
	tetriminos[2].original[0] = B1110;
	tetriminos[2].original[1] = B0100;
	tetriminos[2].original[2] = B0000;
	tetriminos[2].original[3] = B0000;
	tetriminos[2].first_block.y = 0;
	tetriminos[2].first_block.x = 0;
	tetriminos[2].diff[0].y = 0;
	tetriminos[2].diff[0].x = 1;
	tetriminos[2].diff[1].y = 0;
	tetriminos[2].diff[1].x = 2;
	tetriminos[2].diff[2].y = 1;
	tetriminos[2].diff[2].x = 1;
}

void	hard_code_tetrimino_04(t_tetrimino *tetriminos)
{
	tetriminos[3].id = 3;
	tetriminos[3].original[0] = B1110;
	tetriminos[3].original[1] = B0010;
	tetriminos[3].original[2] = B0000;
	tetriminos[3].original[3] = B0000;
	tetriminos[3].first_block.y = 0;
	tetriminos[3].first_block.x = 0;
	tetriminos[3].diff[0].y = 0;
	tetriminos[3].diff[0].x = 1;
	tetriminos[3].diff[1].y = 0;
	tetriminos[3].diff[1].x = 2;
	tetriminos[3].diff[2].y = 1;
	tetriminos[3].diff[2].x = 2;
}

void	hard_code_tetrimino_05(t_tetrimino *tetriminos)
{
	tetriminos[4].id = 4;
	tetriminos[4].original[0] = B1100;
	tetriminos[4].original[1] = B1100;
	tetriminos[4].original[2] = B0000;
	tetriminos[4].original[3] = B0000;
	tetriminos[4].first_block.y = 0;
	tetriminos[4].first_block.x = 0;
	tetriminos[4].diff[0].y = 0;
	tetriminos[4].diff[0].x = 1;
	tetriminos[4].diff[1].y = 1;
	tetriminos[4].diff[1].x = 0;
	tetriminos[4].diff[2].y = 1;
	tetriminos[4].diff[2].x = 1;
}
