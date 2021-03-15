/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:46:45 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/15 19:50:37 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(char *str);
int				is_space(char c);
int				is_base_valid(char *base);

int				is_base_valid(char *base)
{
	int 		index;
	int 		chk_index;

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

char			*ft_putnbr(int nbr, char *base, int base_num)
{
	long long	i;
	char		*temp;
	int			nbr_len;

	i = 0;
	nbr_len = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= base_num)
		ft_putnbr(nbr / base_num, base, base_num);
	write(1, &base[nbr % base_num], 1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	char		*temp;

	if (!is_base_valid(base))
		return ;
	base_len = ft_strlen2(base);
	temp = malloc(sizeof(char) * base_len + 1);
	ft_putnbr(nbr, base, base_len);
}

int				ft_atoi(char *str, char *base)
{
	int			i;
	int			sign;
	int			result;
	int			base_len;

	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	if (!is_base_valid(base))
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

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			decimal;
	char		*result;

	decimal = ft_nbr_atoi(nbr, base_from);
	ft_nbr_to_base(decimal, base_to);
}
