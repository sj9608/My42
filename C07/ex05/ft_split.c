/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:56:42 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/17 01:27:53 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in(char *str, char ch)
{
	while (*str)
	{
		if (*str == ch)
			return (1);
		str++;
	}
	return (0);
}

int		charset_strlen(char *str, char *charset)
{
	int i;

	i = 0;
	while (!is_in(charset, str[i]) && str[i])
		i++;
	return (i);
}

void	make_result(char *str, char *charset, char **result)
{
	char	*rtmp;
	char	*stmp;
	int		i;
	int		cnt;

	i = 0;
	stmp = str;
	while (*stmp)
	{
		cnt = charset_strlen(stmp, charset);
		if (cnt)
		{
			result[i] = (char *)malloc(sizeof(char) * (cnt + 1));
			if (!result[i])
				return ;
			rtmp = result[i];
			while (!is_in(charset, *stmp) && *stmp)
				*rtmp++ = *stmp++;
			*rtmp = 0;
			i++;
		}
		else
			stmp++;
	}
	result[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		cnt;
	int		flag;
	int		i;

	cnt = 0;
	i = -1;
	flag = 1;
	while (str[++i])
	{
		if (is_in(charset, str[i]))
			flag = 1;
		else
		{
			if (flag)
				cnt++;
			flag = 0;
		}
	}
	result = (char	**)malloc(sizeof(char *) * (cnt + 1));
	if (!result)
		return (0);
	make_result(str, charset, result);
	return (result);
}
