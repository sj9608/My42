/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 21:31:48 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/28 21:12:40 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		j = 0;
		while (*to_find != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char c[50] = "12345678";
	char c2[50] = "23";

	printf("%s\n", strstr(c, c2));
	printf("%s\n", ft_strstr(c, c2));

	return (0);
}
