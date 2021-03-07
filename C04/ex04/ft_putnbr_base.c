/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:12:03 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/02 15:04:23 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		++i;
	}
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

void	ft_putnbr(int nbr, char *base, int base_num)
{
	int		i;

	i = 0;
	base_num = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= base_num)
		ft_putnbr(nbr / base_num, base, base_num);
	write(1, &base[nbr % base_num], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = ft_strlen(base);
	ft_putnbr(nbr, base, base_len);
}

int		main(void)
{
	ft_putnbr_base(-8, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-17, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-23, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-7, "poneyvif");

	return (0);
}
