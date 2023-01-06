/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:55:39 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 06:12:37 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushb(s_swap **stacka, s_swap **stackb)
{
	s_swap	*ptr;

	if (*stacka == NULL)
		return ;
	ptr = (*stacka)->next;
	add_fornt(stackb, *stacka);
	*stacka = ptr;
	ft_putstr("pb\n", 1);
}
