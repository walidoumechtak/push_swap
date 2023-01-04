/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:50:00 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 17:51:50 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sa(s_swap **stackA)
{
    s_swap  *ptr;
    int temp;

    ptr = *stackA;
    temp = ptr -> data;
    ptr -> data = ptr -> next -> data;
    ptr -> next -> data = temp;
}