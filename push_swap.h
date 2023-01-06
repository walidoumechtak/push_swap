/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:33:34 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:00:35 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_swap
{
	int				data;
	int				index;
	struct s_swap	*next;
}					t_swap;

int					list_size(t_swap *ptr);
void				add_back(t_swap **list, t_swap *new);
void				delone(t_swap **list);
void				lst_clear(t_swap **lst);
t_swap				*lst_new(int content);
void				add_fornt(t_swap **list, t_swap *new);
t_swap				*get_last_lst(t_swap *lst);
void				ft_putstr(char *str, int n);
int					ft_index_of(t_swap *list, int n);
void				ft_role(t_swap **stackB, int size_stack, int bigE);
int					*desc_array(t_swap *list, int len);

long long int		ft_atoi(const char *str);
int					*get_array(t_swap *lst, int len);

void				pusha(t_swap **stackA, t_swap **stackB);
void				pushb(t_swap **stackA, t_swap **stackB);
void				swapa(t_swap **stackA);
void				swapb(t_swap *stackB);
void				swapab(t_swap *stackA, t_swap *stackB);
void				rotatea(t_swap **stackA);
void				rotateb(t_swap **stackB);
void				rotateall(t_swap **stackA, t_swap **stackB);
void				rra(t_swap **stackA);
void				rrb(t_swap **stackB);
void				rrall(t_swap **stackA, t_swap **stackB);

int					isall_digit(char **av, int ac);
int					isnot_repeated(char **av, int ac);
int					isnot_big_int(char **av, int ac);
int					is_inputs_sorted(char **av, int ac);
int					the_big_num(t_swap *list);
int					the_small_num(t_swap *list);
int					*get_sorted_array(t_swap *stackA, int len);
int					index_from_stack(t_swap *stack, int nb);
void				index_the_stack(t_swap *stack);
int					check_list_sort(t_swap *list);
int					ft_strcmp(char *s1, char *s2);
int					ft_strlena(char *str);

void				s_five(t_swap **list, t_swap **stackB, int ac);
void				three(t_swap **list, int ac);
void				big_stack(t_swap **stackA, t_swap **stackB, int nm);
void				fill_stack(t_swap **head, char **av, int ac);

char				*get_next_line(int fd);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *s);
void				*free_it(char *s1, char *s2);
char				*ft_strdup(const char *s1);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				**ft_split(char const *s, char c);

void				pa(t_swap **stackA, t_swap **stackB);
void				pb(t_swap **stackA, t_swap **stackB);
void				ra(t_swap **stackA);
void				rb(t_swap **stackB);
void				rr(t_swap **stackA, t_swap **stackB);
void				rra_bonus(t_swap **stackA);
void				rrb_bonus(t_swap **stackB);
void				rrr(t_swap **stackA, t_swap **stackB);
void				sa(t_swap **stackA);
void				sb(t_swap **stackB);
void				ss(t_swap **stackA, t_swap **stackB);

#endif