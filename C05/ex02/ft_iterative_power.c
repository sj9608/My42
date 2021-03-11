/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:29:39 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/11 18:13:01 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb < 0 || power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		--power;
	}
	return (result);
}
