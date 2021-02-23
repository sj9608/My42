/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:06:36 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/20 10:07:08 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char first = '0';
	char comma = ',';
	char space = ' ';
	while (first <= '6')
	{
		char second = first + 1;

		while (second <= '8')
		{
			char third = second + 1;

			while (third <= '9')
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
				third++;
				write(1, &comma, 1);
				write(1, &space, 1);
			}
			second++;
		}
		first++;
	}
	write(1, "789", 3);
}	
