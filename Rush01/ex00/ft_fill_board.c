/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 16:46:20 by minhekim          #+#    #+#             */
/*   Updated: 2021/03/07 22:02:46 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_check_row.h"
#include "ft_stdlib.h"

extern int	g_size;
extern int	g_printed;

int		**ft_initialize_board(int size)
{
	int		i;
	int		j;
	int		**board;

	board = (int **)malloc(size * sizeof(int *));
	i = 0;
	while (i < size)
	{
		board[i] = (int *)malloc(size * sizeof(int));
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			board[j][i] = j + 1;
			j++;
		}
		i++;
	}
	return (board);
}

int		up(int **board, int col, int up)
{
	int		i;
	int		max_up;

	i = 0;
	max_up = 0;
	while (i < g_size)
	{
		if (board[i][col] > max_up)
		{
			max_up = board[i][col];
			up--;
		}
		i++;
	}
	if (up == 0)
		return (1);
	else
		return (0);
}

int		down(int **board, int col, int down)
{
	int		i;
	int		max_down;

	i = 0;
	max_down = 0;
	while (i < g_size)
	{
		if (board[g_size - 1 - i][col] > max_down)
		{
			max_down = board[g_size - 1 - i][col];
			down--;
		}
		i++;
	}
	if (down == 0)
		return (1);
	else
		return (0);
}

void	ft_fill_col(int **clue, int **board, int c, int s)
{
	int		i;

	if (g_printed)
		return ;
	if (s == 1)
	{
		if (up(board, c, clue[0][c]) && down(board, c, clue[1][c]))
		{
			if (c < g_size - 1)
				ft_fill_col(clue, board, c + 1, g_size);
			else
				ft_check_row(clue, board, g_size);
		}
	}
	i = 0;
	while (i < s)
	{
		ft_fill_col(clue, board, c, s - 1);
		if (s % 2 == 1)
			ft_swap(&(board[0][c]), &(board[s - 1][c]));
		else
			ft_swap(&(board[i][c]), &(board[s - 1][c]));
		i++;
	}
}
