/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:33:34 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/07 21:33:34 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>

int list_size(s_swap *ptr);
void    add_back(s_swap *list, s_swap *new);
void    delone(s_swap *list);
void    swapA(s_swap *stackA);
void    swapB(s_swap *stackB);
void    swapAB(s_swap *stackA, s_swap *stackB);
void    rotateA(s_swap *stackA);
void    rotateB(s_swap *stackB);
void    rotateAll(s_swap *stackA, s_swap *stackB);
void    rra(s_swap *stackA);
void    rrb(s_swap *stackB);
void    rrAll(s_swap *stackA, s_swap *stackB)

typedef struct  t_swap
{
    int data;
    s_swap *next;
} s_swap;


#endif