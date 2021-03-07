/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_board.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:23:52 by minhekim          #+#    #+#             */
/*   Updated: 2021/03/07 21:52:17 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILL_BOARD_H
# define FT_FILL_BOARD_H

int		**ft_initialize_board(int size);
int		up(int **board, int col, int up);
int		down(int **board, int col, int down);
void	ft_fill_col(int **clue, int **board, int col, int size);

#endif
