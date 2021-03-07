/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:17:02 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/02 17:05:26 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int		is_base_valid(char *base)
{
	int index;
	int chk_index;

	index = 0;
	if (*base == '\0' || ft_strlen(base) < 2)
		return (0);
	while (base[index] != '\0')
	{
		if (base[index] == '+' || base[index] == '-' || base[index] == ' ')
			return (0);
		chk_index = index + 1;
		while (base[chk_index] != '\0')
		{
			if (base[index] == base[chk_index])
				return (0);
			++chk_index;
		}
		++index;
	}
	return (1);
}

int		ft_check_strnum(char str, char *base)
{
	int index;

	index = 0;
	while (base[index] != '\0')
	{
		if (str == base[index])
			return index;
		index++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int result;
	int base_len;

	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	if (!is_base_valid(base))
		return (0);
	while (*str == '+' || *str == '-' || *str == ' ')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (str[i] != '\0' && ft_check_strnum(str[i], base))
	{
		result *= base_len;
		result += sign * (ft_check_strnum(str[i], base));
		i++;
	}
	return (result);
}

#include <stdio.h>

int		main(void)
{
	int i = ft_atoi_base("sdlkfakldsf", "0123456789abcdef");
	printf("%d",i);
	return (0);
}
