/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:46:45 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/17 05:55:47 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(char *str);
int				is_space(char c);
int				ft_check_strnum(char str, char *base);

int				is_base_valid(char *base)
{
	int			index;
	int			chk_index;

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

// char			*ft_putnbr(int nbr, char *base, int base_num) // int nbr을 base 기수법으로 변환
// {
// 	long long	i;
// 	char		*temp;
// 	int			nbr_len;
// 	int			cnt;

// 	i = 0;
// 	nbr_len = 0;
// 	cnt = 0;
// 	if (nbr < 0)
// 	{
// 		write(1, "-", 1);
// 		nbr = nbr * -1;
// 	}
// 	if (nbr >= base_num)
// 		ft_putnbr(nbr / base_num, base, base_num);
// 	write(1, &base[nbr % base_num], 1);
// }

char			*ft_nbr_to_base(int nbr, char *base)
{
	int			base_len;
	int			cnt;
	char		*temp;

	cnt = 0;
	base_len = ft_strlen(base);
	temp = malloc(sizeof(char) * 34);
	temp[base_len + 1] = 0;
	while (nbr >= base_len)
	{
		cnt++;
		temp[33 - cnt] = base[nbr % base_len];
		nbr /= base_len;
	}
	temp = &temp[33 - cnt];
	return (temp);
}

int				ft_nbr_atoi(char *str, char *base) // str ->base 진법으로 변환
{
	int			i;
	int			sign;
	int			result;
	int			base_len;

	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	while (is_space(*str))
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

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			decimal;
	char		*result;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (0);
	decimal = ft_nbr_atoi(nbr, base_from);
	return(result = ft_nbr_to_base(decimal, base_to));
}
