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
	char i = '0';
	char comma = ',';
	char sp = ' ';
	while (i <= '6')
	{
		char j = i + 1;
		while(j <= '8')
		{
			char k = j + 1;
			while(k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				k++;
				write(1, &comma, 1);
				write(1, &sp, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "789", 3);
}

			
