/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 22:41:43 by seshim            #+#    #+#             */
/*   Updated: 2021/03/14 23:27:21 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void			ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void			err_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		write(2, str + i, 1);
		i++;
	}
}

int				isspace_check(char str, int *space, int *first)
{
	if (str == 9 || (str >= 11 && str <= 13) || str == ' ')
	{
		if (first && *first == 0)
		{
			*first = 1;
			return (1);
		}
		*space = 1;
		return (1);
	}
	else
	{
		*space = 0;
		return (0);
	}
}

void			print(t_dict *head)
{
	t_dict	*cur;

	cur = head;
	while (cur != NULL)
	{
		ft_putstr(cur->key);
		write(1, "\n", 1);
		ft_putstr(cur->value);
		write(1, "\n", 1);
		cur = cur->next;
	}
}

int				ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
		i++;
	}
	return (0);
}
