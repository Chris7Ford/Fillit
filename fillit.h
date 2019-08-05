/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 20:02:27 by jkaplin           #+#    #+#             */
/*   Updated: 2019/03/18 15:28:24 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# include "libft/libft.h"

# define B0000 0
# define B0001 1
# define B0010 2
# define B0011 3
# define B0100 4
# define B0101 5
# define B0110 6
# define B0111 7
# define B1000 8
# define B1001 9
# define B1010 10
# define B1011 11
# define B1100 12
# define B1101 13
# define B1110 14
# define B1111 15
# define ALL_ONES 65535

# define STD_OUT 1
# define FALSE 0
# define TRUE 1
# define ERROR -2
# define FAIL -1
# define END_OF_FILE 0
# define OK 1
# define LINE_LENGTH 4
# define LINES_AMOUNT 4
# define TETRIMINO_SIZE 4
# define T_SIZE 4
# define DIFF_POINTS 3
# define BLOCK_CHAR '#'
# define EMPTY_CHAR '.'
# define TETRIMINOS_AMOUNT 19
# define MAX 16
# define MAX_TETRIMINOS 26
# define FILLIT_1 1
# define FILLIT_2 2

typedef struct		s_point
{
	int				y;
	int				x;
}					t_point;

typedef struct		s_size
{
	int				array_length;
	int				square_size;
}					t_size;

typedef struct		s_tetrimino
{
	unsigned short	original[LINE_LENGTH];
	unsigned short	lines[LINE_LENGTH];
	t_point			first_block;
	t_point			diff[3];
	t_point			placement_point;
	int				id;
}					t_tetrimino;

typedef struct		s_grid
{
	unsigned short	lines[MAX];
	int				y;
	int				x;
}					t_grid;

void				hard_code_tetriminos(t_tetrimino *tetriminos);
void				hard_code_to_the_left(t_tetrimino *tetriminos);
void				hard_code_tetrimino_01(t_tetrimino *tetriminos);
void				hard_code_tetrimino_02(t_tetrimino *tetriminos);
void				hard_code_tetrimino_03(t_tetrimino *tetriminos);
void				hard_code_tetrimino_04(t_tetrimino *tetriminos);
void				hard_code_tetrimino_05(t_tetrimino *tetriminos);
void				hard_code_tetrimino_06(t_tetrimino *tetriminos);
void				hard_code_tetrimino_07(t_tetrimino *tetriminos);
void				hard_code_tetrimino_08(t_tetrimino *tetriminos);
void				hard_code_tetrimino_09(t_tetrimino *tetriminos);
void				hard_code_tetrimino_10(t_tetrimino *tetriminos);
void				hard_code_tetrimino_11(t_tetrimino *tetriminos);
void				hard_code_tetrimino_12(t_tetrimino *tetriminos);
void				hard_code_tetrimino_13(t_tetrimino *tetriminos);
void				hard_code_tetrimino_14(t_tetrimino *tetriminos);
void				hard_code_tetrimino_15(t_tetrimino *tetriminos);
void				hard_code_tetrimino_16(t_tetrimino *tetriminos);
void				hard_code_tetrimino_17(t_tetrimino *tetriminos);
void				hard_code_tetrimino_18(t_tetrimino *tetriminos);
void				hard_code_tetrimino_19(t_tetrimino *tetriminos);
int					read_shape(char tetrimino_lines
					[LINES_AMOUNT][LINE_LENGTH], int fd);
int					read_tetriminos(char *file, t_tetrimino *tetrimino_array,
					t_tetrimino *tetrimino_shapes);
int					fillit1(t_grid grid, t_size *count,
					t_tetrimino *tetrimino_array, int i);
int					fillit2(t_grid grid, t_size *count,
					t_tetrimino *tetrimino_array, int i);
t_point				do_block(int first, t_point *first_block, int i, int j);
int					valid_input(char input[LINES_AMOUNT]
					[LINE_LENGTH], t_point *diff);
int					recognize_tetrimino(t_tetrimino *tetriminos, t_point *diff);
void				reset_lines(t_tetrimino *tetrimino);
void				shift_lines(t_tetrimino *tetrimino);
void				initialize_grid(t_grid *grid, int smallest_size);
void				shift_borders(t_grid *grid, int square_size);
int					check_lines(t_tetrimino tetrimino, t_grid grid);
void				fill_grid(t_grid *grid, t_tetrimino *tetrimino);
void				unfill_grid(t_grid *grid,
					t_tetrimino tetrimino, int square_size);
void				initialize_square(char square[MAX][MAX]);
t_grid				solve_square(t_tetrimino *tetrimino_array, t_size *size);
void				fill_square(char square[MAX][MAX],
					t_tetrimino *tetrimino_array, t_size size);
int					print_square(t_size size, t_tetrimino *tetrimino_array);
#endif
