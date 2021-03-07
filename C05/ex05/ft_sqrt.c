/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:55:01 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/02 21:55:02 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;
	int i;

	i = 1;
	sqrt = 0;
	if (nb < 1)
		return (0);
	while (sqrt <= nb)
	{
		sqrt = i * i;
		if (sqrt == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int		main(void)
{
	printf("%d", ft_sqrt());
	return (0);
}