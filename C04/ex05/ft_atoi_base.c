/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:17:02 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/10 01:53:46 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen3(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int		is_base_valid2(char *base)
{
	int index;
	int chk_index;

	index = 0;
	if (*base == '\0' || ft_strlen3(base) < 2)
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
			return (index);
		index++;
	}
	return (-1);
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
	base_len = ft_strlen3(base);
	if (!is_base_valid2(base))
		return (0);
	while (*str == '+' || *str == '-' || *str == ' ')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (str[i] != '\0' && ft_check_strnum(str[i], base) != -1)
	{
		result *= base_len;
		result += sign * (ft_check_strnum(str[i], base));
		i++;
	}
	return (result);
}
