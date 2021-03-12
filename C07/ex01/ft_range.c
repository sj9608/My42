/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:16:11 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/12 22:59:47 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int index;
	int size;

	index = 0;
	size = max - min;
	if (min > max)
		return (0);
	result = malloc(sizeof(int) * size);
	while (index < size)
	{
		result[index] = min + index;
		++index;
	}
	return (result);
}

#include <stdio.h>

int		main(void)
{
	int *test;

	test = ft_range(23, 55);
	while (*test)
	{
		printf("%d ", *test);
		++test;
	}
	return (0);
}
