/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:51:18 by seshim            #+#    #+#             */
/*   Updated: 2021/03/14 23:50:00 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	head_save(t_dict **head, t_dict *dic, t_dict **prev, int *chk)
{
	*head = dic;
	*prev = dic;
	if (*chk == 0)
		*chk = 1;
}

void	save_dict(int fd, int *err, t_dict **head)
{
	char	*key;
	char	*value;
	t_dict	*prev;
	t_dict	*dic;
	int		check;

	check = 0;
	while (*(key = read_num(fd, err)) != 0
		&& (*(value = read_value(fd, err)) != 0))
	{
		dic = create_element(key, value);
		if (!check)
			head_save(head, dic, &prev, &check);
		else
		{
			prev->next = dic;
			prev = dic;
		}
	}
	close(fd);
}

void	combine(char *str, t_dict *head)
{
	int		count;
	char	**place_arr;

	count = place_value(str);
	if (count < 0)
	{
		err_putstr("Dict Error\n");
		return ;
	}
	if (str[0] == '0' && str[1] == '\0')
	{
		while (ft_strcmp(head->key, "0"))
			head = head->next;
		ft_putstr(head->value);
		write(1, "\n", 1);
		return ;
	}
	place_arr = alloc_arr(count, head);
	print_all(count, str, head, place_arr);
	if (count > 0)
	{
		while (count--)
			free(place_arr[count]);
		free(place_arr);
	}
}

void	dict(char *filename, char *argv)
{
	int		fd;
	int		err;
	t_dict	*head;

	head = NULL;
	err = 1;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		err_putstr("Error\n");
		return ;
	}
	save_dict(fd, &err, &head);
	if (err == 0 || !head)
		err_putstr("Dict Error\n");
	else if (err == 2)
		err_putstr("Malloc Error\n");
	else
		combine(argv, head);
	clean(head);
}

void	rush(int argc, char *argv[])
{
	char *arg;

	arg = argv[argc - 1];
	if (argc == 3)
	{
		if ((arg = ft_arg_valid(arg)))
			dict(argv[1], argv[argc - 1]);
		else
			err_putstr("Error");
	}
	else if (argc == 2)
	{
		if ((arg = ft_arg_valid(arg)))
			dict(DEFAULT_DICT, argv[argc - 1]);
		else
			err_putstr("Error");
	}
}
