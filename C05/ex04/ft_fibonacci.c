/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:22:09 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/10 18:49:12 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive(int nb, int n_1, int n_2)
{
	if (nb == 0)
		return (n_1);
	else if (nb == 1)
		return (n_2);
	return (ft_recursive(nb - 1, n_2, (n_1 + n_2)));
}

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (ft_recursive(index, 0, 1));
}
