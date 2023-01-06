/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:53:07 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 06:40:48 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three(s_swap **list, int ac)
{
	s_swap	*ptr;

	ptr = *list;
	if (ac == 4)
	{
		if (the_small_num(*list) == 0 && the_big_num(*list) == 1)
		{
			rra(list);
			swapa(list);
		}
		else if (the_small_num(*list) == 1 && the_big_num(*list) == 2)
			swapa(list);
		else if (the_small_num(*list) == 2 && the_big_num(*list) == 1)
			rra(list);
		else if (the_small_num(*list) == 2 && the_big_num(*list) == 0)
		{
			swapa(list);
			rra(list);
		}
		else if (the_small_num(*list) == 1 && the_big_num(*list) == 0)
			rotatea(list);
	}
}
