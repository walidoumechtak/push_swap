/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapAB.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:42:01 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 16:12:15 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swapab(s_swap *stackA, s_swap *stackB)
{
	swapa(&stackA);
	swapb(stackB);
	ft_putstr("ss\n", 1);
}
