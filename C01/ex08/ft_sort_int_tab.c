/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:25:06 by seungjle          #+#    #+#             */
/*   Updated: 2021/02/24 00:43:47 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap2(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (++j < size)
		{
			if (tab[j - 1] > tab[j])
				ft_swap2(&tab[j], &tab[j - 1]);
		}
		i++;
	}
}
