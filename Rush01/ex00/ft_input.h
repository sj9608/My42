/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:59:51 by seungjle          #+#    #+#             */
/*   Updated: 2021/03/07 21:41:45 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INPUT_H
# define FT_INPUT_H

int		ft_is_valid_input(char *str);
int		**set_clue(char *str, int size, int **clue);
int		**ft_input(char *str, int size);

#endif
