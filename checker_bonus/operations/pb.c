/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:46:35 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 19:50:12 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pb(s_swap **stackA, s_swap **stackB)
{
	s_swap	*ptr;

	if (*stackA == NULL)
		return ;
	ptr = (*stackA) -> next;
	add_fornt(stackB, *stackA);
	*stackA = ptr;
}