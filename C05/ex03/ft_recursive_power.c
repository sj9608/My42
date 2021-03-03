/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:42:15 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/02 18:42:16 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return 1;
	return nb * ft_recursive_power(nb, --power);
}
#include <stdio.h>

int		main(void)
{
	printf("%d", ft_recursive_power(3, 4));
	return (0);
}
