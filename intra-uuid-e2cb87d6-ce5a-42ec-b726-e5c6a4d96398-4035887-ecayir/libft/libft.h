/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecayir <ecayir@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:07:48 by ecayir            #+#    #+#             */
/*   Updated: 2022/04/23 14:07:20 by ecayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "unistd.h"
# include "stdlib.h"

char	**ft_split(char *s, char c);
size_t	ft_strlen(char *s);
int		ft_isalpha(int c);
void	ft_putstr(char *s);
char	*ft_strdup(char *s1);
int		ft_strcmp(char *s1, char *s2);
long	ps_atoll(char *str);
void	ft_putnbr(int n);
#endif
