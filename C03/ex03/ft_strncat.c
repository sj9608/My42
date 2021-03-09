/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 21:27:32 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/09 20:24:57 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *temp;

	temp = dest;
	if (nb == 0)
		return (dest);
	while (*temp)
	{
		++temp;
	}
	while (*src && nb > 0)
	{
		*temp = *src;
		++temp;
		++src;
		--nb;
	}
	*temp = 0;
	return (dest);
}
