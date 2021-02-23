/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:48:04 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/23 21:06:57 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

void	ft_comma(void)
{
	ft_putchar2(',');
	ft_putchar2(' ');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 97)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar2('0' + a / 10);
			ft_putchar2('0' + a % 10);
			ft_putchar2(' ');
			ft_putchar2('0' + b / 10);
			ft_putchar2('0' + b % 10);
			ft_comma();
			b++;
		}
		a++;
	}
	write(1, "98 99", 5);
}
