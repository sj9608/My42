/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 22:34:09 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/07 18:21:23 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
	{
		++len;
	}
	return len;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_len;
	unsigned int dest_len;
	int i;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	while (src[i] && i < (int)(size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = '\0';
	if (dest_len < size)
		return (src_len + dest_len);
	else
		return (src_len + size);
}

int		main(void)
{
	char st1[15] = "world!";
	char st2[30] = "hello ";
	char st3[15] = "world!";
	char st4[30] = "hello ";
	unsigned int st = 0;
	unsigned int ft = 0;

	st = strlcat(st2, st1, 0);
	ft = ft_strlcat(st4, st3, 0);
	printf("%s, %d\n", st2, st);
	printf("%s, %d\n", st4, ft);
	return (0);
}

