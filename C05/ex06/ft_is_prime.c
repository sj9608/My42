/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:00:38 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/02 23:00:39 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int chk;
	int i;

	i = 2;
	chk = nb / 2;
	while (i < chk)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

#include <stdio.h>

int		main(void)
{
	printf("%d", ft_is_prime(31));
	return (0);
}
