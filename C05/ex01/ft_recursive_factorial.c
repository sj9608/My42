/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:37:00 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/02 18:14:30 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return nb * ft_recursive_factorial(nb - 1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(4));

	return (0);
}
