/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:59:31 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/25 01:03:42 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (n)
	{
		if (src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
			n--;
		}
	}
	return (dest);
}
