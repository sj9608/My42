/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 02:59:21 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/21 03:01:16 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 7;
	b = 2;

	printf("before a = %d, b = %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("before a = %d, b = %d", a, b);
	return (0);
}
