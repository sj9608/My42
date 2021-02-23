/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 00:51:17 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/24 01:33:23 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *temp;
	
	temp = dest;
	while((*dest++ = *src++) != '\0')
	
	return temp;
}

int		main(void)
{
	char *s = "hello";
	char *cp;

	ft_strcpy(cp, s);

	printf("%s", &cp);

	return (0);
}
