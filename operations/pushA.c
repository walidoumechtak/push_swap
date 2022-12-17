/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:49:36 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 15:53:35 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pushA(s_swap **stackA, s_swap **stackB)
{
    int len;

    len = list_size(*stackB);
    if (len != 0)
    {
        add_fornt(stackA, *stackB);
        delone(*stackB);
    }
}