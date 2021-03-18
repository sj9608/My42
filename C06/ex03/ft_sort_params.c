/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:50:32 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/18 15:22:58 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (unsigned int)*str1 - (unsigned int)*str2;
		++str1;
		++str2;
	}
	return ((unsigned int)*str1 - (unsigned int)*str2);
}

void		ft_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = 2;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				temp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int			main(int argc, char *argv[])
{
	int		i;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		++i;
	}
	return (0);
}
