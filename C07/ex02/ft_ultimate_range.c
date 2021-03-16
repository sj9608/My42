/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:32:27 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/16 19:01:57 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	size;
	int	index;

	index = 0;
	size = max - min;
	if (min >= max)
		return (0);
	else if (!(temp = (int *)malloc(sizeof(int) * size)))
		return (-1);
	*range = temp;
	while (index < size)
	{
		temp[index] = min + index;
		++index;
	}
	return (size);
}
