/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:59:31 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/25 19:38:38 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		if (src[index] != '\0')
			dest[index] = src[index];
		else
			dest[index] = '\0';
		index++;
	}
	return (dest);
}
