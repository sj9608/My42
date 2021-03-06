/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:12:53 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/04 15:12:54 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}

int		ft_strslen(int size, char **str, char *sep)
{
	int index;
	int j;
	int len;
	
	len = 0;
	j = 0;
	while (str[j] != '\0')
	{
		index = 0;
		while (*str[index] != '\0')
		{
			++index;
			++len;
		}
		++j;
		++len;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *result;

	
