/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:16:11 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/16 17:34:08 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*result;
	int	index;
	int	size;

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
