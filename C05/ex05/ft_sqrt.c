/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:55:01 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/11 16:24:53 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= (unsigned int)nb)
	{
		if (i * i == (unsigned int)nb)
			return (i);
		i++;
	}
	return (0);
}
