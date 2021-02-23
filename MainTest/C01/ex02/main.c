/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 02:41:18 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/21 03:02:13 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 0;
	b = 2;
	printf("before %d ',' %d\n", a, b);
	ft_swap(&a, &b);
	printf("after %d ',' %d\n", a, b);
	return (0);
}
