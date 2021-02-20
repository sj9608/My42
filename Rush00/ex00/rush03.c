/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim2 <mkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:56:19 by mkim2             #+#    #+#             */
/*   Updated: 2021/02/20 17:19:53 by mkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int col;
	int row;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (col == 1 && (row == 1 || row == y))
				ft_putchar('A');
			else if (col == x && (row == 1 || row == y))
				ft_putchar('C');
			else if ((col == 1 || col == x) && row != 1 && row != y)
				ft_putchar('B');
			else if (col != 1 && col != x && (row == 1 || row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
