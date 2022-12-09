/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:38:32 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/08 19:38:32 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swapB(s_swap *stackB)
{
    int len;
    int temp;

    len = list_size(stackB);
    if (len > 1)
    {
        while (stackB -> next != NULL)
            stackB = stackB -> next;
        temp = stackB -> data;
        stackB -> data = stackB -> next -> data;
        stackB -> next -> data = temp;
    }
}