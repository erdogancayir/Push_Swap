/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk|p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:45:43 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/22 15:10:37 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	p_stk(t_stk **here, t_stk **there)
{
	t_stk	*temp;

	if (!(*there) && (*here))
	{
		*there = malloc(sizeof(t_stk));
		(*there)->next = NULL;
		(*there)->prev = NULL;
		(*there)->num = (*here)->num;
		(*here) = (*here)->next;
		(*here)->prev = NULL;
	}
	else
	{
		if (*here)
		{
			temp = malloc(sizeof(t_stk));
			temp->next = NULL;
			temp->prev = NULL;
			temp->num = (*here)->num;
			add_front(there, temp);
			(*here) = (*here)->next;
		}
	}
}
