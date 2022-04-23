/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk|s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:51:30 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/22 14:51:31 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	s_stk(t_stk **stk)
{
	int	temp;

	if ((*stk) && (*stk)->next)
	{
		temp = (*stk)->num;
		(*stk)->num = (*stk)->next->num;
		(*stk)->next->num = temp;
	}
}
