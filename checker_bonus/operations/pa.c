/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:45:08 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 16:21:06 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pa(s_swap **stackA, s_swap **stackB)
{
	s_swap	*ptr;
	int		len;

	len = list_size(*stackB);
	if (len != 0)
	{
		ptr = (*stackB)->next;
		add_fornt(stackA, *stackB);
		*stackB = ptr;
	}
}
