/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:16:04 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/16 17:33:48 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		index;
	char	*temp;

	index = 0;
	while (src[index] != '\0')
	{
		++index;
	}
	temp = malloc(sizeof(char) * index + 1);
	index = 0;
	while (src[index] != '\0')
	{
		temp[index] = src[index];
		++index;
	}
	temp[index] = '\0';
	return (temp);
}
