/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:47:53 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/23 20:53:22 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *first, char *second, char *third)
{
	char comma;
	char space;

	comma = ',';
	space = ' ';
	write(1, first, 1);
	write(1, second, 1);
	write(1, third, 1);
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0';
	while (first <= '6')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_print(&first, &second, &third);
				third++;
			}
			second++;
		}
		first++;
	}
	write(1, "789", 3);
}
