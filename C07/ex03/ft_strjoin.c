/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:12:53 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/16 17:36:04 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char		*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char		*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}

int			ft_chk_len(int size, char **strs, char *sep)
{
	int		i;
	int		result;
	int		sep_len;

	i = 1;
	sep_len = ft_strlen(sep);
	result = ft_strlen(strs[0]);
	while (i < size)
	{
		result += ft_strlen(sep);
		result += ft_strlen(strs[i]);
		i++;
	}
	return (result);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*result;

	i = 1;
	if (size == 0)
		return (result = malloc(sizeof(char)));
	total_len = ft_chk_len(size, strs, sep);
	if (!(result = malloc(sizeof(char) * total_len + 1)))
		return (0);
	ft_strcpy(result, strs[0]);
	while (i < size)
	{
		ft_strcat(result, sep);
		ft_strcat(result, strs[i]);
		i++;
	}
	result[total_len] = 0;
	return (result);
}
