/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:23:33 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/10 18:48:20 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_find_next_prime(int nb)
{
	unsigned int	i;

	i = 2;
	if (nb < 2)
		return (ft_find_next_prime(nb + 1));
	while (i * i < (unsigned int)nb)
	{
		if ((unsigned int)nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
