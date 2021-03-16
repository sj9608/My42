/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:53:26 by seshim            #+#    #+#             */
/*   Updated: 2021/03/16 11:16:19 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int			plus_check(char buf, int *first, int i)
{
	if (i == 0 && *first == 1 && buf == '+')
	{
		*first = 0;
		return (1);
	}
	else
		return (0);
}

int			is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

char		*ft_arg_valid(char *arg)
{
	int		i;
	char	*temp;

	i = 1;
	temp = arg;
	while (*temp)
		if (arg[0] == '0' && is_digit(*(temp + 1)))
			return (0);
		else if (arg[0] == '+')
		{
			while (temp[i])
			{
				if (!(is_digit(temp[i])))
					return (0);
				i++;
			}
			temp++;
		}
		else if (!is_digit(*temp))
			return (0);
		else
			temp++;
	if (arg[0] == '+')
		arg = arg + 1;
	return (arg);
}
