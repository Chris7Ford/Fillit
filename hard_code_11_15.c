/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_code_11-15.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 12:32:04 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/16 18:19:29 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	hard_code_tetrimino_11(t_tetrimino *tetriminos)
{
	tetriminos[10].id = 10;
	tetriminos[10].original[0] = B1000;
	tetriminos[10].original[1] = B1100;
	tetriminos[10].original[2] = B0100;
	tetriminos[10].original[3] = B0000;
	tetriminos[10].first_block.y = 0;
	tetriminos[10].first_block.x = 0;
	tetriminos[10].diff[0].y = 1;
	tetriminos[10].diff[0].x = 0;
	tetriminos[10].diff[1].y = 1;
	tetriminos[10].diff[1].x = 1;
	tetriminos[10].diff[2].y = 2;
	tetriminos[10].diff[2].x = 1;
}

void	hard_code_tetrimino_12(t_tetrimino *tetriminos)
{
	tetriminos[11].id = 11;
	tetriminos[11].original[0] = B1000;
	tetriminos[11].original[1] = B1000;
	tetriminos[11].original[2] = B1100;
	tetriminos[11].original[3] = B0000;
	tetriminos[11].first_block.y = 0;
	tetriminos[11].first_block.x = 0;
	tetriminos[11].diff[0].y = 1;
	tetriminos[11].diff[0].x = 0;
	tetriminos[11].diff[1].y = 2;
	tetriminos[11].diff[1].x = 0;
	tetriminos[11].diff[2].y = 2;
	tetriminos[11].diff[2].x = 1;
}

void	hard_code_tetrimino_13(t_tetrimino *tetriminos)
{
	tetriminos[12].id = 12;
	tetriminos[12].original[0] = B1000;
	tetriminos[12].original[1] = B1000;
	tetriminos[12].original[2] = B1000;
	tetriminos[12].original[3] = B1000;
	tetriminos[12].first_block.y = 0;
	tetriminos[12].first_block.x = 0;
	tetriminos[12].diff[0].y = 1;
	tetriminos[12].diff[0].x = 0;
	tetriminos[12].diff[1].y = 2;
	tetriminos[12].diff[1].x = 0;
	tetriminos[12].diff[2].y = 3;
	tetriminos[12].diff[2].x = 0;
}

void	hard_code_tetrimino_14(t_tetrimino *tetriminos)
{
	tetriminos[13].id = 13;
	tetriminos[13].original[0] = B0110;
	tetriminos[13].original[1] = B1100;
	tetriminos[13].original[2] = B0000;
	tetriminos[13].original[3] = B0000;
	tetriminos[13].first_block.y = 0;
	tetriminos[13].first_block.x = 1;
	tetriminos[13].diff[0].y = 0;
	tetriminos[13].diff[0].x = 1;
	tetriminos[13].diff[1].y = 1;
	tetriminos[13].diff[1].x = -1;
	tetriminos[13].diff[2].y = 1;
	tetriminos[13].diff[2].x = 0;
}

void	hard_code_tetrimino_15(t_tetrimino *tetriminos)
{
	tetriminos[14].id = 14;
	tetriminos[14].original[0] = B0100;
	tetriminos[14].original[1] = B1110;
	tetriminos[14].original[2] = B0000;
	tetriminos[14].original[3] = B0000;
	tetriminos[14].first_block.y = 0;
	tetriminos[14].first_block.x = 1;
	tetriminos[14].diff[0].y = 1;
	tetriminos[14].diff[0].x = -1;
	tetriminos[14].diff[1].y = 1;
	tetriminos[14].diff[1].x = 0;
	tetriminos[14].diff[2].y = 1;
	tetriminos[14].diff[2].x = 1;
}
