/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:11:31 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:01:03 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrpb1(t_swap **list)
{
	rra(list);
	rra(list);
}

void	swap_push_b(t_swap **list, t_swap **stackB, int *len)
{
	swapa(list);
	pushb(list, stackB);
	(*len)--;
}

void	s_five_cases(t_swap **list, t_swap **stackB)
{
	int	len;

	len = list_size(*list);
	while (1)
	{
		if (the_small_num(*list) < 2)
		{
			if (the_small_num(*list) == 0)
			{
				pushb(list, stackB);
				len--;
			}
			else if (the_small_num(*list) == 1)
				swap_push_b(list, stackB, &len);
		}
		else if (the_small_num(*list) > 2)
			rrpb1(list);
		else
			rotatea(list);
		if (len == 3)
			break ;
	}
	three(list, 3);
}

void	s_five(t_swap **list, t_swap **stackB, int ac)
{
	t_swap	*ptr;
	int		i;

	ptr = *list;
	s_five_cases(list, stackB);
	i = ac - 3;
	while (i > 0)
	{
		pusha(list, stackB);
		i--;
	}
}
