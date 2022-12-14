/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRA.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:58:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/12 10:10:41 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rra(s_swap *stackA)
{
    int last;

    last = stackA -> data;
    while (stackA -> next != NULL)
    {
        stackA -> data = stackA -> next -> data;
        stackA = stackA -> next;
    }
    stackA -> next -> data = last;
}