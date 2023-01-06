/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:49:36 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:06:31 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pusha(t_swap **stacka, t_swap **stackb)
{
	t_swap	*ptr;
	int		len;

	len = list_size(*stackb);
	if (len != 0)
	{
		ptr = (*stackb)->next;
		add_fornt(stacka, *stackb);
		*stackb = ptr;
	}
	ft_putstr("pa\n", 1);
}
