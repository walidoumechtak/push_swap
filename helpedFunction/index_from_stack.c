/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_from_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:48:07 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/26 17:50:17 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int index_from_stack(s_swap *stack, int nb)
{
    int i;
    
    i = 0;
    while (stack != NULL)
    {
        if (nb == stack->data)
            return (i);
        i++;
    }
    return (-1);
}