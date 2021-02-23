/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:48:14 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/23 21:07:36 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
