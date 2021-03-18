/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:46:45 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/18 17:16:10 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(char *str);
int				is_space(char c);
int				ft_check_strnum(char str, char *base);
int				abs(int n);

int				is_base_valid(char *base) // base 유효성 검사
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

char			**ft_alloc(int nbr, char **base, char **temp)
{
	int			cnt;
	int			count_op;
	int			base_len;

	cnt = 0;
	count_op = nbr;
	base_len = ft_strlen(*base);
	while (count_op >= base_len)
	{
		count_op /= base_len;
		cnt++;
	}
	if (nbr < 0)
	{
		*temp[33 - cnt - 1] = '-';
		nbr *= -1;
	}
	cnt = 0;
	while (nbr >= base_len)
	{
		*temp[33 - cnt] = *base[nbr % base_len];
		nbr /= base_len;
		cnt++;
	}
	*temp[33 - cnt] = *base[nbr % base_len];
	return (temp);
}

char			*ft_nbr_to_base(int nbr, char *base) // int nbr을 base를 기수로하는 숫자로 바꾸기
{
	int			base_len;
	// int			cnt;
	char		*temp;

	// cnt = 0;
	base_len = ft_strlen(base);
	temp = malloc(sizeof(char) * 34);
	temp[34] = 0;
	ft_alloc(nbr, &base, &temp);
	// while (nbr >= base_len)
	// {
	// 	temp[33 - cnt] = base[nbr % base_len];
	// 	nbr /= base_len;
	// 	cnt++;
	// }
	// temp[33 - cnt] = base[nbr % base_len];
	// if (nbr < 0)
	// {
	// 	temp[33 - cnt - 1] = '-';
	// 	temp = &temp[33 - cnt - 1];
	// }
	// else
	// 	temp = &temp[33 - cnt];
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
#include <stdio.h>
char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			decimal;
	char		*result;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (0);
	decimal = ft_nbr_atoi(nbr, base_from);
	// printf("%d\n", decimal);
	result = ft_nbr_to_base(decimal, base_to);
	return (result);
}



int		main(void)
{
	char *s = ft_convert_base("-42", "0123456789", "0123456789");

	printf("%s", s);
	return (0);
}
