/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:12:03 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/28 17:12:04 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_invalid(char *base)
{
	while (*base)
	{
		if (*base < 32 || *base > 127)
		{
			return (0);
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char ch;
