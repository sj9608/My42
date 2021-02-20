/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim2 <mkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:56:19 by mkim2             #+#    #+#             */
/*   Updated: 2021/02/20 17:49:26 by mkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int row;
	int col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 || col == x) && row == 1)
				ft_putchar('A');
			else if ((col == 1 || row == x) && row == y)
				ft_putchar('C');
			else if ((col == 1 || col == x) && (row != 1 || row != y))
				ft_putchar('B');
			else if ((col != 1 || col != x) && (row == 1 || row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
