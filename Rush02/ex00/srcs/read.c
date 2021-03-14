/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjle <seungjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 22:37:36 by seshim            #+#    #+#             */
/*   Updated: 2021/03/14 23:25:54 by seungjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict			*create_element(char *key, char *value)
{
	t_dict		*temp;

	temp = (t_dict *)malloc(sizeof(t_dict));
	temp->key = key;
	temp->value = value;
	temp->next = 0;
	return (temp);
}

void			clean(t_dict *head)
{
	t_dict		*cur;
	t_dict		*temp;

	cur = head;
	while (cur != NULL)
	{
		free(cur->key);
		free(cur->value);
		temp = cur;
		cur = cur->next;
		free(temp);
	}
	free(cur);
}

int				err_check(char *str, int *err, int null)
{
	if (!str && null)
	{
		*err = 2;
		str[0] = 0;
		return (1);
	}
	else if (null)
	{
		return (0);
	}
	else
	{
		*err = 0;
		str[0] = 0;
		return (1);
	}
}

char			*read_num(int fd, int *err)
{
	char		buf[1];
	char		*key;
	int			i;
	int			space;
	int			first;

	i = 0;
	space = 0;
	first = 1;
	key = (char *)malloc(1024 + 1);
	if (err_check(key, err, 1))
		return (key);
	while (read(fd, buf, sizeof(buf)) && *buf != ':')
	{
		if (plus_check(*buf, &first, i))
			continue ;
		if (*buf >= '0' && *buf <= '9' && !space)
			key[i++] = *buf;
		else if (isspace_check(*buf, &space, 0))
			continue ;
		else if (*buf != '\n')
			err_check(key, err, 0);
	}
	key[i] = 0;
	return (key);
}

char			*read_value(int fd, int *err)
{
	char		buf[1];
	char		*value;
	int			i;
	int			space;
	int			first;

	i = 0;
	first = 0;
	value = (char *)malloc(1024 + 1);
	if (err_check(value, err, 1))
		return (value);
	while (read(fd, buf, sizeof(buf)) && *buf != '\n')
		if (i == 0 && isspace_check(*buf, &space, 0))
			continue;
		else if (*buf >= 32 && *buf < 127)
		{
			isspace_check(*buf, &space, &first);
			if (!space)
				value[i++] = *buf;
			isspace_check(*buf, &space, &first);
		}
		else
			err_check(value, err, 0);
	value[i] = 0;
	return (value);
}
