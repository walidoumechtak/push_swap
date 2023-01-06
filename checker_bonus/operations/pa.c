/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:45:08 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:01:23 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pa(t_swap **stackA, t_swap **stackB)
{
	t_swap	*ptr;
	int		len;

	len = list_size(*stackB);
	if (len != 0)
	{
		ptr = (*stackB)->next;
		add_fornt(stackA, *stackB);
		*stackB = ptr;
	}
}
