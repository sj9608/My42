/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:55:01 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/11 00:08:46 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int sqrt;
	unsigned int i;

	i = 1;
	if (nb < 0)
		return (0);
	sqrt = 0;
	while (sqrt <= (unsigned int)nb)
	{
		sqrt = i * i;
		if (sqrt == (unsigned int)nb)
			return (i);
		i++;
	}
	return (0);
}
