/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:15:46 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 15:48:19 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swapA(s_swap **stackA)
{
    s_swap  *ptr;
    int temp;

    ptr = *stackA;
    
    temp = ptr -> data;
    ptr -> data = ptr -> next -> data;
    ptr -> next -> data = temp;
    printf("sa\n");
}
