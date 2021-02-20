/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim2 <mkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:23:40 by mkim2             #+#    #+#             */
/*   Updated: 2021/02/20 17:47:30 by mkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(int col, int row, int col_max, int row_max)
{
	if (col == 1 && row == 1)
		ft_putchar('/');
	else if ((col == col_max && row == 1) || (col == 1 && row == row_max))
		ft_putchar('\\');
	else if (col == col_max && row == row_max)
		ft_putchar('/');
	else if ((col == 1 || col == col_max) && row > 1 && row < row_max)
		ft_putchar('*');
	else if (col != 1 && col != col_max && (row == 1 || row == row_max))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

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
			print_char(col, row, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
