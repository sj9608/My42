/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:00:38 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/10 18:42:08 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	unsigned int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= (unsigned int)nb)
	{
		if ((unsigned int)nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}
