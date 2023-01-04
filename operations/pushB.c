/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:55:39 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 18:27:47 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushB(s_swap **stackA, s_swap **stackB)
{
	s_swap	*ptr;
	// int		len;

	if (*stackA == NULL)
		return ;
	ptr = (*stackA) -> next;
	add_fornt(stackB, *stackA);
	*stackA = ptr;
	ft_putstr("pb\n", 1);
}
