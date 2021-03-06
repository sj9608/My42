/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:16:11 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/04 14:16:12 by seungjle         ###   ########.fr       */
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
		result[index] = size - 1 + index;
		++index;
	}
	result[index] = '\0';
	return (result);
}

#include <stdio.h>

int		main(void)
{
	int *test;

	test = ft_range(3, 7);
	while (*test)
	{
		printf("%d ", *test);
		++test;
	}
	return (0);
}
