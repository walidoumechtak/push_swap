/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRB.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:21:26 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/09 17:21:26 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rrb(s_swap *stackB)
{
    int last;

    last = stackB -> data;
    while (stackB -> next != NULL)
    {
        stackB -> data = stackB -> next -> data;
        stackB = stackB -> next;
    }
    stackB -> next -> data = last;
}