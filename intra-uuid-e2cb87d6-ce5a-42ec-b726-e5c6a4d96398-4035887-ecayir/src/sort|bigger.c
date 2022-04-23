/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort|bigger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:05:30 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/23 14:34:46 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_index(t_stk *stk, int pvt)
{
	int	begin;
	int	last;
	int	j;
	int	size;

	size = lst_size(stk);
	begin = 0;
	while (stk && pvt <= stk->num)
	{
		stk = stk->next;
		begin++;
	}
	j = begin;
	while (stk)
	{
		if (pvt > stk->num)
			last = j;
		j++;
		stk = stk->next;
	}
	if (begin > (size - last))
		return (last);
	return (begin);
}

void	change_sort(t_stk **a, t_stk **b)
{
	int	pvt;
	int	size;
	int	idx;

	pvt = get_pivot(*b);
	while (get_min(*b) != pvt && !(is_revsorted(*b)))
	{
		size = (lst_size(*b) / 2);
		idx = find_index(*b, pvt);
		if (idx <= size && idx != 0)
			selection(a, b, RB);
		else if (idx > size && idx != 0)
			selection(a, b, RRB);
		else
			selection(a, b, PA);
	}
}

void	first_sort(t_stk **a, t_stk **b)
{
	int	pvt;
	int	size;
	int	idx;
	int	i;

	i = 1;
	while (!check_sort(*a))
	{
		pvt = get_pivot(*a);
		while (get_min(*a) != pvt)
		{
			size = (lst_size(*a) / 2);
			idx = find_index(*a, pvt);
			if (idx <= size && idx != 0)
				selection(a, b, RA);
			else if (idx > size && idx != 0)
				selection(a, b, RRA);
			else
				selection(a, b, PB);
		}
		if (i-- > 0)
			change_sort(a, b);
	}
}

void	end_sort(t_stk **a, t_stk **b)
{
	int	size;
	int	max_idx;
	int	max;

	while (*b)
	{
		size = lst_size(*b);
		max = max_get(*b);
		max_idx = get_index(*b, max, 2);
		if (max_idx == 1)
			selection(a, b, SB);
		else if (max_idx <= size / 2 && max_idx != 0)
			selection(a, b, RB);
		else if (max_idx >= size / 2 && max_idx != 0)
			selection(a, b, RRB);
		else
			selection(a, b, PA);
	}
	(void)*a;
}

void	sort_bigger(t_stk **a, t_stk **b)
{
	first_sort(a, b);
	end_sort(a, b);
	free_stk(a);
	free_stk(b);
}
