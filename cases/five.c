/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:11:31 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/22 00:44:25 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rrpB(s_swap **list, s_swap **stackB, int n)
{
    if (n == 3)
        rra(list);
    rra(list);
    pushB(list,stackB);
}

void    s_five_cases(s_swap **list, s_swap **stackB)
{
    int i;

    i = 5;
    while (i > 0)
    {
        if (the_small_num(*list) < 2)
        {
            if (the_small_num(*list) == 0)
                pushB(list, stackB);
            else if (the_small_num(*list) == 1)
            {
                swapA(list);
                pushB(list, stackB);
            }
        }
        else if (the_small_num(*list) > 2)
        {
            if (the_small_num(*list) == 3)
                rrpB(list, stackB, 3);
            else if (the_small_num(*list) == 4)
                rrpB(list, stackB, 4);
        }
        else
        {
            rotateA(list);
            rotateA(list);
            pushB(list, stackB);
        }
        i--;     
    }
}

void    s_five(s_swap **list, s_swap **stackB)
{
    s_swap  *ptr;
    int i;

    ptr = *list;
    i = 5;
    s_five_cases(list, stackB);
    while (i > 0)
    {
        pushA(list, stackB);
        i--;
    }
}