/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRA.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:58:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 09:45:04 by woumecht         ###   ########.fr       */
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
    stackA -> data = last;
    printf("rra\n");
}