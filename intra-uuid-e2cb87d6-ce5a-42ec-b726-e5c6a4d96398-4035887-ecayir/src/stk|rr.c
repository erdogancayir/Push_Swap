/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk|rr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:50:35 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/22 14:50:46 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stk	*end_of_stk(t_stk *stk)
{
	t_stk	*new;

	new = malloc(sizeof(t_stk));
	while (stk->next)
		stk = stk->next;
	new->num = stk->num;
	new->next = NULL;
	return (new);
}

void	last_del(t_stk **stk)
{
	t_stk	*temp;

	temp = *stk;
	while (temp)
	{
		if (temp->next->next == NULL)
			break ;
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

void	rr_stk(t_stk **stk)
{
	t_stk	*temp;

	temp = end_of_stk(*stk);
	last_del(stk);
	add_front(stk, temp);
}
