/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:27:31 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/26 00:18:23 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_check_to_up(char *str, int i)
{
	if (str[i] >= ' ' && str[i] <= '/')
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
	}
	else if (str[i] >= ':' && str[i] <= '@')
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
	}
	else if (str[i] >= '[' && str[i] <= '`')
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
	}
	else if (str[i] >= '{' && str[i] <= '~')
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
	}
	return (str);
}

char	*ft_check_to_low(char *str, int i)
{
	if ((str[i] >= 'A' && str[i] <= 'Z'))
		str[i] += 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_check_to_low(str, i);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		ft_check_to_up(str, i);
		i++;
	}
	return (str);
}
