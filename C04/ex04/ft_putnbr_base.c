/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:12:03 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/10 02:47:17 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strlen2(char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		++i;
	}
	return (i);
}

int			is_base_valid(char *base)
{
	int		index;
	int		chk_index;

	index = 0;
	if (*base == '\0' || ft_strlen2(base) < 2)
		return (0);
	while (base[index] != '\0')
	{
		if (base[index] == '+' || base[index] == '-')
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

void		ft_putnbr1(int nbr, char *base, int base_num)
{
	int		i;

	i = 0;
	if (nbr == -2147483648)
	{
		ft_putnbr1(nbr / base_num, base, base_num);
		write(1, &base[(nbr % base_num) * -1], 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= base_num)
		ft_putnbr1(nbr / base_num, base, base_num);
	write(1, &base[nbr % base_num], 1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		base_len;

	if (!is_base_valid(base))
		return ;
	base_len = ft_strlen2(base);
	ft_putnbr1(nbr, base, base_len);
}
