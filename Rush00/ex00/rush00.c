/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim2 <mkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:50:30 by mkim2             #+#    #+#             */
/*   Updated: 2021/02/20 17:13:45 by mkim2            ###   ########.fr       */
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
			if ((col == 1 || col == x) && (row == 1 || row == y))
				ft_putchar('o');
			else if ((col == 1 || col == x) && row != 1 && row != y)
				ft_putchar('|');
			else if (col != 1 && col != x && (row == 1 || row == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
