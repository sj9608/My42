/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:25:20 by hyeonkki          #+#    #+#             */
/*   Updated: 2021/03/15 22:12:06 by hyeonkki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	one_num(t_dict *head, char *find_num, int type)
{
	char	temp[2];
	t_dict	*cur;

	cur = head;
	ft_strncpy(temp, find_num, 1);
	while (ft_strcmp(cur->key, temp))
		cur = cur->next;
	if (find_num[0] != '0')
		flag_putstr(cur->value);
	cur = head;
	while (ft_strcmp(cur->key, "100"))
		cur = cur->next;
	if (type == 1 && find_num[0] != '0')
		flag_putstr(cur->value);
}

void	sec_num(t_dict *head, char *find_num)
{
	char	temp[3];
	t_dict	*cur;

	cur = head;
	ft_strncpy(temp, find_num, 2);
	if (find_num[0] == '0')
		one_num(head, ++find_num, 0);
	else if (find_num[0] == '1')
	{
		while (ft_strcmp(temp, cur->key) && cur != 0)
			cur = cur->next;
		flag_putstr(cur->value);
	}
	else
	{
		temp[1] = '0';
		while (ft_strcmp(temp, cur->key) && cur != 0)
			cur = cur->next;
		flag_putstr(cur->value);
		one_num(head, find_num + 1, 0);
	}
}

int		place_value(char *str)
{
	int		len;
	int		n;
	int		count;

	len = ft_strlen(str);
	n = 1;
	if (len > 39)
		return (-1);
	count = (len - 1) / 3;
	return (count);
}

char	**alloc_arr(int count, t_dict *head)
{
	int		i;
	t_dict	*cur;
	char	**place_arr;

	i = 0;
	if (count > 0)
	{
		place_arr = (char **)malloc(sizeof(char *) * count);
		if (place_arr == 0)
			err_putstr("Malloc Error\n");
		while (count)
		{
			cur = head;
			while (ft_strlen(cur->key) != (i + 1) * 3 + 1)
				cur = cur->next;
			place_arr[i] = (char *)malloc(sizeof(char) * ft_strlen(cur->value));
			if (place_arr[i] == 0)
				err_putstr("Malloc Error\n");
			ft_strcpy(place_arr[i++], cur->value);
			count--;
		}
		return (place_arr);
	}
	return (0);
}

void	print_all(int cnt, char *str, t_dict *head, char **place)
{
	int		index;
	int		div;
	int		mod;

	div = ft_strlen(str) / 3;
	mod = ft_strlen(str) % 3;
	index = 0;
	if (mod == 1)
		one_num(head, str + index++, 0);
	else if (mod == 2)
	{
		sec_num(head, str);
		index += 2;
	}
	if (cnt > 0 && mod != 0)
		flag_putstr(place[--cnt]);
	while (div--)
	{
		one_num(head, str + index, 1);
		sec_num(head, str + index + 1);
		(cnt > 0 && ft_strncmp(str + index, "000", 3)) ?
			flag_putstr(place[--cnt]) : --cnt;
		index += 3;
	}
	write(1, "\n", 1);
}
