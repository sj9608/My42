/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 15:01:54 by seshim            #+#    #+#             */
/*   Updated: 2021/03/14 23:51:08 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define DEFAULT_DICT "numbers.dict"

typedef struct	s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}				t_dict;

int				g_flag;

void			ft_strcpy(char *dst, char *src);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			ft_putstr(char *str);
void			flag_putstr(char *str);

void			one_num(t_dict *int_head, char *find_num, int type);
void			sec_num(t_dict *int_head, char *find_num);
int				place_value(char *str);
char			**alloc_arr(int count, t_dict *len_head);
void			print_all(int cnt, char *str, t_dict *head, char **place);

t_dict			*create_element(char *key, char *value);
void			clean(t_dict *head);
int				err_check(char *str, int *err, int null);
char			*read_num(int fd, int *err);
char			*read_value(int fd, int *err);

void			ft_strncpy(char *dest, char *src, int n);
void			err_putstr(char *str);
int				isspace_check(char str, int *space, int *firtst);
void			print(t_dict *head);
int				ft_strcmp(char *s1, char *s2);

void			head_save(t_dict **head, t_dict *dic, t_dict **prev, int *chk);
void			save_dict(int fd, int *err, t_dict **head);
void			dict(char *filename, char *argv);
void			combine(char *str, t_dict *head);
void			rush(int argc, char *argv[]);

int				plus_check(char buf, int *first, int i);
char			*ft_arg_valid(char *arg);
int				is_digit(char c);

#endif
