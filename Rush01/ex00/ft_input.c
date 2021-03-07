/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:20:39 by minhekim          #+#    #+#             */
/*   Updated: 2021/03/07 21:31:53 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_valid_input(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
		if (*str > '0' && *str <= '9')
		{
			str++;
			count++;
		}
		else if (*str == '\0')
			break ;
		else if (*str == ' ' || (*str >= 9 && *str <= 13))
			return (0);
		else
			return (0);
	}
	if (count % 4 != 0 || count / 4 < 4 || count / 4 > 9)
		return (0);
	else
		return (count / 4);
}

int		**set_clue(char *str, int size, int **clue)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			while (*str == ' ' || (*str >= 9 && *str <= 13))
				str++;
			if (*str - '0' > size)
				return ((int **)0);
			clue[i][j] = *str - '0';
			str++;
			j++;
		}
		i++;
	}
	return (clue);
}

int		**ft_input(char *str, int size)
{
	int		**clue;
	int		i;

	clue = (int **)malloc(4 * sizeof(int *));
	i = 0;
	while (i < 4)
	{
		clue[i] = (int *)malloc(size * sizeof(int));
		i++;
	}
	clue = set_clue(str, size, clue);
	return (clue);
}
