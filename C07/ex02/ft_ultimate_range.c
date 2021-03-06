/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:32:27 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/04 14:32:34 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *temp;
	int size;
	int index;

	index = 0;
	size = max - min;
	if (min >= max)
		return (0);
	temp = malloc(sizeof(int) * size);
	*range = temp;
	while (index < size)
	{
		temp[index] = size - 1 + index;
		++index;
	}
	return (size);
}

#include <stdio.h>

int		main(void)
{
	int *temp;

	printf("\ntemp size is : %d\n", ft_ultimate_range(&temp, 3, 7));
	while (*temp)
	{
		printf("%d ", *temp);
		++temp;
	}
	return (0);
}
