/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:58:14 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/22 15:16:05 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	check_sort(t_stk *stk)
{
	int	nothing;

	while (stk && stk->next)
	{
		nothing = stk->num;
		if (nothing > stk->next->num)
			return (false);
		else
			stk = stk->next;
	}
	return (true);
}

int	get_min(t_stk *stk)
{
	int	min;

	min = stk->num;
	while (stk)
	{
		if (min > stk->num)
			min = stk->num;
		stk = stk->next;
	}
	return (min);
}

t_stk	*sublist(t_stk *stk)
{
	while (stk->next)
		stk = stk->next;
	return (stk);
}

void	add_front(t_stk **stk, t_stk *new)
{
	new->next = *stk;
	new->prev = NULL;
	if ((*stk) != NULL)
		(*stk)->prev = new;
	*stk = new;
}

int	get_index(t_stk *stk, int find, int flag)
{
	int	i;

	if (flag == 1)
	{
		i = 1;
		while (stk)
		{
			if (stk->num <= find)
				return (i);
			i++;
			stk = stk->next;
		}
	}
	else if (flag == 2)
	{
		i = 0;
		while (stk)
		{
			if (stk->num >= find)
				return (i);
			stk = stk->next;
			i++;
		}
	}
	return (-1);
}
