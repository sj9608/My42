/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 22:48:58 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/17 03:45:02 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void		ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
}

void		ft_rec(int nb)
{
	char	ch;

	if (nb == 0)
		return ;
	ft_rec(nb / 10);
	ch = '0' + nb % 10;
	write(1, &ch, 1);
}

void		ft_putnbr(int nb)
{
	char	ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		ft_rec(-(nb / 10));
		ch = '0' - nb % 10;
	}
	else
	{
		ft_rec(nb / 10);
		ch = '0' + nb % 10;
	}
	write(1, &ch, 1);
}

void		ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
