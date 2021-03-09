/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:28:27 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/08 16:23:54 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi2(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str)
	{
		if (is_space(*str))
			++str;
		else if (*str == '-')
		{
			sign *= -1;
			++str;
		}
		else if (is_digit(*str))
		{
			result = (result * 10) + (*str - '0');
			++str;
			if (!is_digit(*str))
				return (sign * result);
		}
		else
			++str;
	}
	return (0);
}
