/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@studnet.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:20:11 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/03 15:20:14 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int index;

	index = argc - 1;
	while (index > 0)
	{
		while (*argv[index])
			write(1, argv[index]++, 1);
		write(1, "\n", 1);
		index--;
	}
	return (0);
}


