/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:55:39 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/17 15:54:06 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pushB(s_swap **stackA, s_swap **stackB)
{
    int len;

    len = list_size(*stackA);
    if (len != 0)
    {
        add_back(stackB, *stackA);
        delone(*stackA);
    }
}