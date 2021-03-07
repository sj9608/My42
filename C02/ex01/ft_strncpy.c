/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:59:31 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/26 00:06:28 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0' && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	char *s = "hello";
	char cp1[10] = "";
	char cp2[10] = "";
	char cp3[10];
	char cp4[10];
	char cp5[10] = "abcdefg";
	char cp6[10] = "abcdefg";

	printf("src : %s\n\n", s);
	printf("---------before---------\n");
	printf("cp1 : %s\n", cp1);
	printf("cp2 : %s\n", cp2);
	printf("cp3 : %s\n", cp3);
	printf("cp4 : %s\n", cp4);
	printf("cp5 : %s\n", cp5);
	printf("cp6 : %s\n\n", cp6);

	ft_strncpy(cp1, s, 3);
	strncpy(cp2, s, 3);
	ft_strncpy(cp3, s, 5);
	strncpy(cp4, s, 5);
	ft_strncpy(cp5, s, 5);
	strncpy(cp6, s, 5);

	printf("---------after---------\n");
	printf("ft_strncpy(d, s, 3) cp1 : %s\n", cp1);
	printf("strncpy(d, s, 3) cp2 : %s\n", cp2);
	printf("ft_strncpy(d, s, 5) cp3 : %s\n", cp3);
	printf("strncpy(d, s, 5) cp4 : %s\n", cp4);
	printf("ft_strncpy(d, s, 5) cp5 : %s\n", cp5);
	printf("strncpy(d, s, 5) cp6 : %s\n\n", cp6);

	return (0);
}
