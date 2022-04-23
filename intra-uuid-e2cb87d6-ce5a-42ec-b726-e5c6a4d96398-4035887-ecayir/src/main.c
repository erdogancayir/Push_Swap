/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:37:10 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/23 14:48:30 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_swap(t_list *fb, int ac, char **av)
{
	fb->split = fill_args(fb, ac, av);
	check_dup(fb->split, -1, -1);
	check_number(fb->split, -1, -1);
	fb->stk_a = fill_list(fb, fb->split, -1);
	free_split(fb->split, ac);
	fb->len = lst_size(fb->stk_a);
	if (check_sort(fb->stk_a))
		exit(0);
	if (fb->len <= 10)
		short_sort(&(fb->stk_a), &(fb->stk_b), fb->len);
	else if (fb->len > 10)
		sort_bigger(&(fb->stk_a), &(fb->stk_b));
}

int	main(int ac, char **av)
{
	t_list	*fb;

	fb = NULL;
	if (ac > 1)
	{
		fb = ft_init(fb);
		push_swap(fb, ac, av);
		free(fb);
		fb = NULL;
	}
	else
		return (0);
}
