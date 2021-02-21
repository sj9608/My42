/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 02:49:16 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/21 02:53:45 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int quota;
	int remainder;
	
	a = 7;
	b = 2;
	quota = 0;
	remainder = 0;
	printf("before a = %d , b = %d , div = %d, mod = %d\n", a, b, quota, remainder);
	ft_div_mod(a, b, &quota, &remainder);
	printf("after a = %d , b = %d , div = %d, mod = %d\n", a, b, quota, remainder);
	return (0);
}
