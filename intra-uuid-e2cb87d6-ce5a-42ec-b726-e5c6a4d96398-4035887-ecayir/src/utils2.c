/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:55:07 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/22 14:55:08 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_exit(char *s)
{
	ft_putstr(s);
	exit(0);
}

void	add_back(t_stk **a, t_stk *new)
{
	t_stk	*temp;

	temp = NULL;
	if (!(*a))
		(*a) = new;
	else
	{
		temp = *a;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
}

void	free_stk(t_stk **lst)
{
	t_stk	*temp;

	if (*lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			free(*lst);
			*lst = NULL;
			*lst = temp;
		}
	}
}

t_stk	*fill_list(t_list *fb, char **s, int i)
{
	t_stk	*temp;

	temp = NULL;
	while (s[++i])
	{
		temp = malloc(sizeof(t_list));
		if (!temp)
			return (0);
		temp->next = NULL;
		temp->prev = NULL;
		temp->num = ps_atoll(s[i]);
		add_back(&(fb->stk_a), temp);
		temp = NULL;
	}
	free_stk(&temp);
	return (fb->stk_a);
}

int	lst_size(t_stk *stk)
{
	int	count;

	count = 0;
	while (stk)
	{
		stk = stk->next;
		count++;
	}
	return (count);
}
