/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:28:17 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/09 17:08:43 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex1;
	char	hex2;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else
		{
			hex1 = "0123456789abcdef"[((unsigned char)str[i]) / 16];
			hex2 = "0123456789abcdef"[((unsigned char)str[i]) % 16];
			write(1, "\\", 1);
			write(1, &hex1, 1);
			write(1, &hex2, 1);
		}
		i++;
	}
}
