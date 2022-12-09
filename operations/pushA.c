/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:49:36 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/08 19:49:36 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pushA(s_swap *stackA, s_swap *stackB)
{
    int len;

    len = list_size(stackB);
    if (len != 0)
    {
        while (stackB != NULL)
            stackB = stackB -> next;
        add_back(stackA, stackB);
        delone(stackB);
    }
}