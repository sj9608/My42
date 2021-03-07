/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:11:27 by minhekim          #+#    #+#             */
/*   Updated: 2021/03/07 22:00:05 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_check_row.h"
#include "ft_fill_board.h"
#include "ft_input.h"

int		g_size = 0;
int		g_printed = 0;

int		main(int argc, char **argv)
{
	int		**clue;
	int		**board;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	g_size = ft_is_valid_input(argv[1]);
	if (!g_size)
	{
		ft_putstr("Error\n");
		return (0);
	}
	clue = ft_input(argv[1], g_size);
	if (!clue)
	{
		ft_putstr("Error\n");
		return (0);
	}
	board = ft_initialize_board(g_size);
	ft_fill_col(clue, board, 0, g_size);
	if (!g_printed)
		ft_putstr("Error\n");
	ft_free(board, clue);
}
