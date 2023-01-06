/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_role.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:29:36 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:03:24 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_role(t_swap **stackB, int size_stack, int bigE)
{
	int	index;

	index = bigE;
	if (index < size_stack / 2)
	{
		while (index-- > 0)
			rotateb(stackB);
	}
	else
	{
		while (index++ < size_stack)
			rrb(stackB);
	}
}
