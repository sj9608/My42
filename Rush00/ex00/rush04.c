/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim2 <mkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:04:12 by mkim2             #+#    #+#             */
/*   Updated: 2021/02/20 17:48:11 by mkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(int col, int row, int col_max, int row_max)
{
	if (col == 1 && row == 1)
		ft_putchar('A');
	else if ((col == col_max && row == 1) || (col == 1 && row == row_max))
		ft_putchar('C');
	else if (col == col_max && row == row_max)
		ft_putchar('A');
	else if ((col != 1 && col != col_max) && (row == 1 || row == row_max))
		ft_putchar('B');
	else if ((row != 1 && row != row_max) && (col == 1 || col == col_max))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

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
			print_char(col, row, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
