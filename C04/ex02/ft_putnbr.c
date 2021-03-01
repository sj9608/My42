/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 22:26:13 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/28 13:29:06 by seungjle         ###   ########.fr       */
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

int		main(void)
{
	ft_putnbr(213);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	return (0);
}
