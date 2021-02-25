/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:58:59 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/25 18:36:13 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int length;

	length = 0;
	while (src[length])
		length++;
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_length_check;

	i = 0;
	src_length_check = ft_strlen(src);
	if (dest[0] == '\0' || src == '\0')
		return (0);
	while (i < src_length_check && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_length_check);
}
