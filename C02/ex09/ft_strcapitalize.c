/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:27:31 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/25 13:42:49 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_check(char *str, int i)
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

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		i++;
		ft_check(str, i);
	}
	return (str);
}
