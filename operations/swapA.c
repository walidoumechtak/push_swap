/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:15:46 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/14 17:14:56 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swapA(s_swap *stackA)
{
    int len;
    int temp;

    len = list_size(stackA);
    if (len == 2)
    {
        temp = stackA -> data;
        stackA -> data = stackA -> next -> data;
        stackA -> next -> data = temp;
        printf("sa\n");
        return ;
    }
    if (len > 1)
    {
        while (stackA -> next != NULL)
            stackA = stackA -> next;
        temp = stackA -> data;
        stackA -> data = stackA -> next -> data;
        stackA -> next -> data = temp;
    }
    printf("sa\n");
}