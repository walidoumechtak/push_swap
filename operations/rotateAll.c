/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateAll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:45:30 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/23 15:29:51 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotateAll(s_swap **stackA, s_swap **stackB)
{
    rotateA(stackA);
    rotateB(stackB);
    printf("rr");
}