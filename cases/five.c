/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:11:31 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/24 21:41:59 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rrpB1(s_swap **list)
{
    rra(list);
    rra(list);
}

void    s_five_cases(s_swap **list, s_swap **stackB)
{
    int len;

    len = list_size(*list);
    while (1)
    {
        if (the_small_num(*list) < 2)
        {
            if (the_small_num(*list) == 0)
            {
                pushB(list, stackB);
                len--;
            }
            else if (the_small_num(*list) == 1)
            {
                swapA(list);
                pushB(list, stackB);
                len--;
            }   
        }
        else if (the_small_num(*list) > 2)
            rrpB1(list);
        else
            rotateA(list);
        if (len == 3)
            break ;   
    }
    three(*list, 4);  
}

void    s_five(s_swap **list, s_swap **stackB, int ac)
{
    s_swap  *ptr;
    int i;

    ptr = *list;
    s_five_cases(list, stackB);
    
    i = ac - 1 - 3;
    while (i > 0)
    {
        pushA(list, stackB);
        i--;
    }
}