/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <imugica-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:11:08 by imugica-          #+#    #+#             */
/*   Updated: 2025/03/03 18:10:46 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				pos;
	int				content;
	struct s_stack	*next;
}					t_stack;

t_stack				*ft_stlast(t_stack *lst);
void				ft_stadd_back(t_stack **lst, t_stack *new);
t_stack				*ft_stnew(int content);
int					ft_stsize(t_stack *lst);
long				st_atoi(const char *str, int *corr);
void				sa(t_stack **a);
void				sb(t_stack **a);
void				swap(t_stack **a);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **a);
void				rotate(t_stack **a);
void				rr(t_stack **a, t_stack **b);
t_stack				*ft_stsemilast(t_stack *lst);
void				rra(t_stack **a);
void				rrb(t_stack **a);
int					st_len(t_stack *a);
void				set_indices(t_stack **a);
int					get_bit(int number, int i);
int					has_ended(t_stack *a);
int					check_n_bit(t_stack *a, int i);
void				resolve(t_stack **a, t_stack **b);
void				solve_two(t_stack **a);
void				solve_insert(t_stack **a, t_stack **b);
int					in_reverse_order(t_stack *a);
int					in_order(t_stack *a);

#endif
