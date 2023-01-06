/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:46:35 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:01:27 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pb(t_swap **stackA, t_swap **stackB)
{
	t_swap	*ptr;

	if (*stackA == NULL)
		return ;
	ptr = (*stackA)->next;
	add_fornt(stackB, *stackA);
	*stackA = ptr;
}
