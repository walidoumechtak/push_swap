/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:45:08 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 19:48:38 by woumecht         ###   ########.fr       */
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