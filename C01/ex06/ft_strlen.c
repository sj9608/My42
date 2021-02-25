/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:19:08 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/25 09:36:25 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int length;

	length = 0;
	if (str[0] == '\0')
		return (0);
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
