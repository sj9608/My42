/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 21:27:32 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/27 21:31:03 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	if (nb == 0)
		return (dest);
	while (*dest)
	{
		++dest;
	}
	while (*src && nb > 0)
	{
		*dest = *src;
		++dest;
		++src;
		--nb;
	}
	*dest = 0;
	return (dest);
}

int		main(void)
{
	char c001[100] = "hello";
	char c002[100] = " world";
	char c003[100] = "";
	char c004[100];

	printf("c001 : %s\n", c001);
	printf("c002 : %s\n", c002);
	printf("c003 : %s\n", c003);
	ft_strncat(c003, c001, 4);
	strncat(c004, c001, 4);
	printf("ft_strcat(c003, c001) = %s\n", c003);
	printf("strcat(c001, c002) = %s\n", c004);

	return (0);
}
