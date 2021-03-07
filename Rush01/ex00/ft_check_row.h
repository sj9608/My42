/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:16:32 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/07 21:40:43 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_ROW_H
# define FT_CHECK_ROW_H

void	ft_print_board(int **board, int size);
int		ft_no_overlap(int *board_row, int size);
int		ft_match_clue(int *board_row, int left, int right);
void	ft_check_row(int **clue, int **board, int size);

#endif
