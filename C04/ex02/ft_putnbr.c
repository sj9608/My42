/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 22:26:13 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/10 01:50:19 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rec(int nb)
{
	char ch;

	if (nb == 0)
		return ;
	ft_rec(nb / 10);
	ch = '0' + nb % 10;
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	char ch;

	if (nb < 0)
	{
		ft_putchar('-');
		ft_rec(-(nb / 10));
		ch = '0' - nb % 10;
	}
	else
	{
		ft_rec(nb / 10);
		ch = '0' + nb % 10;
	}
	ft_putchar(ch);
}
