/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:49:36 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/31 16:19:22 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushA(s_swap **stackA, s_swap **stackB)
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
	printf("pa\n");
}
