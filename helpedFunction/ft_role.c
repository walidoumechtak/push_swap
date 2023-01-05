/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_role.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:29:36 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/05 08:09:48 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_role(s_swap **stackB, int size_stack, int bigE)
{
	int index;

	index = bigE;

	if (index < size_stack / 2)
	{
		while (index-- > 0)
			rotateB(stackB);
	}
	else
	{
		while (index++ < size_stack)
			rrb(stackB);
	}
}