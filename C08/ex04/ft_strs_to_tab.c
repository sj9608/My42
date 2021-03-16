/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:22:31 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/16 23:31:56 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *s)
{
	int				i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(char *s1, char *s2)
{
	int				i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s;
	int				i;

	s = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s)
		return (0);
	i = 0;
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = (char*)malloc(s[i].size + 1);
		s[i].copy = (char*)malloc(s[i].size + 1);
		ft_strcpy(s[i].str, av[i]);
		ft_strcpy(s[i].copy, av[i]);
		++i;
	}
	s[i].str = 0;
	s[i].copy = 0;
	return (s);
}
