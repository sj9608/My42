/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:57:58 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/28 15:30:40 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		++dest;
	while (*src)
	{
		*dest = (unsigned char)*src;
		++dest;
		++src;
	}
	*dest = 0;
	return (dest);
}
