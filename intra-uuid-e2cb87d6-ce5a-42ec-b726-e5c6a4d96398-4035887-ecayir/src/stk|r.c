/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk|r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:49:02 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/22 14:49:13 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	r_stk(t_stk **stk)
{
	t_stk	*temp;
	t_stk	*last;

	*stk = (*stk)->next;
	temp = (*stk)->prev;
	last = *stk;
	while (last->next)
		last = last->next;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}
