/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:53:07 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:01:11 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three(t_swap **list, int ac)
{
	t_swap	*ptr;

	ptr = *list;
	if (ac == 3)
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
