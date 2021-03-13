/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:46:45 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/14 03:33:13 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		is_space(char c);
int		is_base_valid(char *base);

int		is_base_valid(char *base)
{
	int index;
	int chk_index;

	index = 0;
	if (*base == '\0' || ft_strlen(base) < 2)
		return (0);
	while (base[index] != '\0')
	{
		if (base[index] == '+' || base[index] == '-' || is_space(base[index]))
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

char		*ft_putnbr(int nbr, char *base, int base_num)
{
	int		i;
	char	*temp;

	i = 0;
	temp = malloc(sizeof(char) * base_num + 1);
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / base_num, base, base_num);
		write(1, &base[(nbr % base_num) * -1], 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= base_num)
		ft_putnbr(nbr / base_num, base, base_num);
	write(1, &base[nbr % base_num], 1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		base_len;

	if (!is_base_valid(base))
		return ;
	base_len = ft_strlen2(base);
	ft_putnbr(nbr, base, base_len);
}

int			ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		result;
	int		base_len;

	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_strlen3(base);
	if (!is_base_valid2(base))
		return (0);
	while (is_space1(*str))
		++str;
	while (*str == '+' || *str == '-')
		sign *= (*str++ == '-') ? -1 : 1;
	while (str[i] != '\0' && ft_check_strnum(str[i], base) != -1)
	{
		result *= base_len;
		result += sign * (ft_check_strnum(str[i], base));
		i++;
	}
	return (result);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	char	*result;

	decimal = ft_atoi_base(nbr, base_from);
	//ft_putnbr_base
}
