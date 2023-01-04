/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:33:34 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 19:40:45 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_swap
{
	int				data;
	int				index;
	struct t_swap	*next;
}					s_swap;

int					list_size(s_swap *ptr);
void				add_back(s_swap **list, s_swap *new);
void				delone(s_swap **list);
void				lst_clear(s_swap **lst);
s_swap				*lst_new(int content);
void				add_fornt(s_swap **list, s_swap *new);
s_swap				*get_last_lst(s_swap *lst);
void				ft_putstr(char *str, int n);

long long int		ft_atoi(const char *str);
// int	*get_array_numbers(char **av, int ac);
int					*get_array(s_swap *lst, int len);

void				pushA(s_swap **stackA, s_swap **stackB);
void				pushB(s_swap **stackA, s_swap **stackB);
void				swapA(s_swap **stackA);
void				swapB(s_swap *stackB);
void				swapAB(s_swap *stackA, s_swap *stackB);
void				rotateA(s_swap **stackA);
void				rotateB(s_swap **stackB);
void				rotateAll(s_swap **stackA, s_swap **stackB);
void				rra(s_swap **stackA);
void				rrb(s_swap **stackB);
void				rrAll(s_swap **stackA, s_swap **stackB);

int					isall_digit(char **av, int ac);
int					isnot_repeated(char **av, int ac);
int					isnot_big_int(char **av, int ac);
int					is_inputs_sorted(char **av, int ac);
int					the_big_num(s_swap *list);
int					the_small_num(s_swap *list);
int					*get_sorted_array(s_swap *stackA, int len);
int					index_from_stack(s_swap *stack, int nb);
void				index_the_stack(s_swap *stack);
int					check_list_sort(s_swap *list);
int 				ft_strcmp(char *s1, char *s2);

void				s_five(s_swap **list, s_swap **stackB, int ac);
void				three(s_swap **list, int ac);
void				big_stack(s_swap **stackA, s_swap **stackB, int nm);
void    			fill_stack(s_swap **head, char **av, int ac);

void				pa(s_swap **stackA, s_swap **stackB);
void				pb(s_swap **stackA, s_swap **stackB);
void    			ra(s_swap **stackA);
void    			rb(s_swap **stackB);
void    			rr(s_swap **stackA, s_swap **stackB);
void    			rra_bonus(s_swap **stackA);
void    			rrb_bonus(s_swap **stackB);
void    			rrr(s_swap **stackA, s_swap **stackB);
void    			sa(s_swap **stackA);
void				sb(s_swap **stackB);
void    			ss(s_swap **stackA, s_swap **stackB);

#endif