/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhekim <minhekim@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:10:29 by minhekim          #+#    #+#             */
/*   Updated: 2021/03/07 01:08:24 by minhekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern int	g_size;
extern int	g_printed;

void	ft_print_board(int **board, int size)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = '0' + board[i][j];
			write(1, &c, 1);
			if (j != size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	g_printed = 1;
}

int		ft_no_overlap(int *board_row, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i <= size - 2)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (board_row[i] == board_row[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_match_clue(int *board_row, int left, int right)
{
	int		i;
	int		max_left;
	int		max_right;

	i = 0;
	max_left = 0;
	max_right = 0;
	while (i < g_size)
	{
		if (board_row[i] > max_left)
		{
			max_left = board_row[i];
			left--;
		}
		if (board_row[g_size - 1 - i] > max_right)
		{
			max_right = board_row[g_size - 1 - i];
			right--;
		}
		i++;
	}
	if (left == 0 && right == 0)
		return (1);
	else
		return (0);
}

void	ft_check_row(int **clue, int **board, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (!ft_no_overlap(board[i], size))
			return ;
		if (!ft_match_clue(board[i], clue[2][i], clue[3][i]))
			return ;
		i++;
	}
	ft_print_board(board, size);
}
