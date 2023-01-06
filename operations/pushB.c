/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:55:39 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:06:36 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushb(t_swap **stacka, t_swap **stackb)
{
	t_swap	*ptr;

	if (*stacka == NULL)
		return ;
	ptr = (*stacka)->next;
	add_fornt(stackb, *stacka);
	*stacka = ptr;
	ft_putstr("pb\n", 1);
}
