/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:59:31 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/07 23:55:29 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int		main(void)
{
	char c[10] = "hello";
	char c1[10] = "bdceaaa";
	char c2[10] = "bdceaaa";

	ft_strncpy(c1, c, 7);
	strncpy(c2, c , 7);
	printf("c1 : %s\n", c1);
	printf("c2 : %s\n", c2);

	return (0);
}
