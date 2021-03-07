/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:29:32 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/07 22:00:23 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

extern int g_size;

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_free(int **board, int **clue)
{
	int i;

	i = 0;
	while (i < g_size)
	{
		free(board[i]);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		free(clue[i]);
		i++;
	}
	free(board);
	free(clue);
}
