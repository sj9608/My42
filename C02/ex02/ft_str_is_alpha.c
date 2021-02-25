/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:34:08 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/25 19:40:10 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
		{
			if (str[index] < 'a' || str[index] > 'z')
				return (0);
		}
		index++;
	}
	return (1);
}
