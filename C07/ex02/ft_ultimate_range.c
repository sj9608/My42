/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:32:27 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/12 23:58:30 by seungjle         ###   ########.fr       */
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
	else if(!(temp = malloc(sizeof(int) * size)))
		return (-1);
	*range = temp;
	while (index < size)
	{
		temp[index] = min + index;
		++index;
	}
	return (size);
}

#include <stdio.h>

int		main(void)
{
	int *temp;

	printf("\ntemp size is : %d\n", ft_ultimate_range(&temp, 5, 9));
	while (*temp)
	{
		printf("%d ", *temp);
		++temp;
	}
	return (0);
}
