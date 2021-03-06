/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:16:04 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/04 14:16:05 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int index;
	char *temp;

	index = 0;
	while (src[index] != '\0')
	{
		++index;
	}
	temp = malloc(sizeof(char) * index);
	index = 0;
	while (src[index] != '\0')
	{
		temp[index] = src[index];
		++index;
	}
	temp[index] = '\0';
	return (temp);
}

int		main(void)
{
	char s1[] = "hello";
	char *s3 = "";
	char *s4 = "";
	printf("s1 : %s\n", s1);
	printf("s3 : %s\n", s3);
	printf("s4 : %s\n", s4);

	s3 = strdup(s1);
	s4 = ft_strdup(s1);
	printf("\n");
	printf("s3 : %s\n", s3);
	printf("s4 : %s\n", s4);

	return (0);
}
