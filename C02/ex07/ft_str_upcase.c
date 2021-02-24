/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_upcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 20:21:37 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/24 20:26:17 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_str_upcase(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if(str[index] >= 97 && str[index] <= 122)
			str[index] -= 32;
		index++;
	}
	return str;
}

int	main(void)
{
	char *str1 = "asdfadf";
	char *str2 = "aBcD";

	printf("before str1 : %s\n", str1);
	ft_str_upcase(str1);
	printf("after str1 : %s\n", str1);

	printf("before str2 : %s\n", str2);
	ft_str_upcase(str2);
	printf("after str2 : %s\n", str2);

	return (0);
}
