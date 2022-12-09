/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:15:46 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/08 10:15:46 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swapA(s_swap *stackA)
{
    int len;
    int temp;

    len = list_size(stackA);
    if (len > 1)
    {
        while (stackA -> next != NULL)
            stackA = stackA -> next;
        temp = stackA -> data;
        stackA -> data = stackA -> next -> data;
        stackA -> next -> data = temp;
    }
}