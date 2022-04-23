/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:40:07 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/22 14:40:08 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	next_next_selection(t_stk **a, t_stk **b, int type)
{	
	if (type == 7)
	{
		ft_putstr("rra\n");
		rr_stk(a);
	}
	else if (type == 8)
	{
		ft_putstr("rrb\n");
		rr_stk(b);
	}
}

void	next_selection(t_stk **a, t_stk **b, int type)
{
	if (type == 4)
	{
		ft_putstr("rb\n");
		r_stk(b);
	}
	else if (type == 5)
	{
		ft_putstr("pa\n");
		p_stk(b, a);
	}
	else if (type == 6)
	{
		ft_putstr("pb\n");
		p_stk(a, b);
	}
	next_next_selection(a, b, type);
}

void	selection(t_stk **a, t_stk **b, int type)
{
	if (type == 1 && lst_size(*a) > 1)
	{
		ft_putstr("sa\n");
		s_stk(a);
	}
	else if (type == 2 && lst_size(*b) > 1)
	{
		ft_putstr("sb\n");
		s_stk(b);
	}
	else if (type == 3)
	{
		ft_putstr("ra\n");
		r_stk(a);
	}
	next_selection(a, b, type);
}
