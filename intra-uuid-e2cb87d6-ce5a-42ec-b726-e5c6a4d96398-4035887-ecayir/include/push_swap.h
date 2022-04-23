/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:14:28 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/23 14:46:02 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"
# include "stdbool.h"
# include "limits.h"
# include "../libft/libft.h"
# include "stdio.h"

# define SA 1
# define SB 2
# define RA 3
# define RB 4
# define PA 5
# define PB 6
# define RRA 7
# define RRB 8

typedef struct s_stk
{
	struct s_stk	*next;
	struct s_stk	*prev;
	int				num;
}	t_stk;

typedef struct s_list
{
	char	**split;
	t_stk	*stk_a;
	t_stk	*stk_b;
	int		len;
}	t_list;

t_list	*ft_init(t_list *fb);
char	**fill_args(t_list *fb, int ac, char **av);
void	ft_exit(char *s);
void	check_dup(char **s, int i, int j);
void	check_number(char **s, int i, int j);
void	add_back(t_stk **a, t_stk *new);
void	free_stk(t_stk **lst);
t_stk	*fill_list(t_list *fb, char **s, int i);
int		lst_size(t_stk *stk);
bool	check_sort(t_stk *stk);
int		get_min(t_stk *stk);
void	for_3_len(t_stk **a, t_stk **b);
void	short_sort(t_stk **a, t_stk **b, int len);
void	selection(t_stk **a, t_stk **b, int type);
void	s_stk(t_stk **stk);
void	p_stk(t_stk **here, t_stk **there);
t_stk	*sublist(t_stk *stk);
void	r_stk(t_stk **stk);
void	add_front(t_stk **stk, t_stk *new);
void	rr_stk(t_stk **stk);
int		get_index(t_stk *stk, int find, int flag);
int		get_pivot(t_stk *stk);
int		max_get(t_stk *stk);
void	sort_bigger(t_stk **a, t_stk **b);
int		is_revsorted(t_stk *stack);
void	free_split(char **split, int ac);

#endif
