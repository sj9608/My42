/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cuslib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:44:15 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/14 14:00:28 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_strcpy(char *dst, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = 0;
}

int		ft_strlen(char *str)
{
	int ret;

	ret = 0;
	while (str[ret])
		++ret;
	return (ret);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((*s1 || *s2) && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
		--n;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
}

void	flag_putstr(char *str)
{
	if (g_flag == 1)
		write(1, " ", 1);
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
	g_flag = 1;
}
