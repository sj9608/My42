/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 02:01:12 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/18 17:02:09 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		abs(int n)
{
	return ((n < 0) ? -n : n);
}

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int		ft_check_strnum(char str, char *base)
{
	int index;

	index = 0;
	while (base[index] != '\0')
	{
		if (str == base[index])
			return (index);
		index++;
	}
	return (-1);
}
