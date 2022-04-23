/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort|short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:43:58 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/22 14:44:20 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	normalize(t_stk **a, t_stk **b, int min)
{
	int	len;
	int	i;

	i = get_index((*a), min, 1);
	len = lst_size(*a) / 2;
	if (len >= i)
		selection(a, b, RA);
	else
		selection(a, b, RRA);
}

void	for_10_len(t_stk **a, t_stk **b, int len)
{
	int	count;
	int	min;

	count = len;
	while (count > 3)
	{
		min = get_min(*a);
		if ((*a)->next && min == (*a)->next->num)
			selection(a, b, SA);
		while (min != (*a)->num)
			normalize(a, b, min);
		if (min == (*a)->num)
		{
			selection(a, b, PB);
			count--;
		}
	}
}

void	for_3_len(t_stk **a, t_stk **b)
{
	t_stk	*sub;
	int		min;

	min = get_min(*a);
	sub = sublist(*a);
	while (!check_sort(*a) && lst_size(*a) == 3)
	{
		if (min == sub->num && (*a)->num < (*a)->next->num)
			selection(a, b, RRA);
		else if (min == sub->num && (*a)->num > (*a)->next->num)
		{
			selection(a, b, SA);
			selection(a, b, RRA);
		}
		else if (min == (*a)->next->num && (*a)->num > sub->num)
			selection(a, b, RA);
		else if (min == (*a)->next->num && (*a)->num < sub->num)
			selection(a, b, SA);
		else if (min == (*a)->num && (*a)->next->num > sub->num)
		{
			selection(a, b, SA);
			selection(a, b, RA);
		}
	}
}

void	short_sort(t_stk **a, t_stk **b, int len)
{
	if (len == 2 && ((*a)->num > (*a)->next->num))
		selection(a, b, SA);
	else if (len <= 3)
		for_3_len(a, b);
	else if (len > 3)
	{
		for_10_len(a, b, len);
		for_3_len(a, b);
		while (*b)
			selection(a, b, PA);
		free_stk(b);
	}
	free_stk(a);
}
