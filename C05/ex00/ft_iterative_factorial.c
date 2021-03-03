/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:28:03 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/02 18:13:42 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		--nb;
	}
	return (result);
}

int		main(void)
{
	int nb;

	nb = 5;
	printf("%d\n", ft_iterative_factorial(nb));
	return (0);
}
