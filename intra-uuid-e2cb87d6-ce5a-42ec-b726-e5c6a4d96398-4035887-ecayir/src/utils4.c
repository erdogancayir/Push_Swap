/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:40:42 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/23 14:50:04 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	max_get(t_stk *stk)
{
	int	max;

	max = stk->num;
	while (stk)
	{
		if (stk->num > max)
			max = stk->num;
		stk = stk->next;
	}
	return (max);
}

int	next(t_stk *stk, int num)
{
	int	max;

	max = max_get(stk);
	while (stk->next)
	{
		if (stk->num < max && stk->num > num)
			max = stk->num;
		stk = stk->next;
	}
	return (max);
}

int	get_pivot(t_stk *stk)
{
	t_stk	*temp;
	int		sum;

	sum = 0;
	temp = stk;
	while (temp)
	{
		sum += temp->num;
		temp = temp->next;
	}
	sum = sum / lst_size(stk);
	return (next(stk, sum));
}

int	is_revsorted(t_stk *stack)
{
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			stack = stack->next;
		else
			return (0);
	}
	return (1);
}

void	free_split(char **split, int ac)
{
	int	i;

	i = -1;
	if (ac == 2)
	{
		while (split[++i])
			free(split[i]);
	}	
}
