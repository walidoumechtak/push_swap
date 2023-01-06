/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_from_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:48:07 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:03:42 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	index_from_stack(t_swap *stack, int nb)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		if (nb == stack->index)
			return (i);
		i++;
	}
	return (-1);
}
