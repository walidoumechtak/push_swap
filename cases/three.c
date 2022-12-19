/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:53:07 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/19 15:53:18 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_3_swap(s_swap *list, int ac)
{
	s_swap *ptr;

	ptr = list;
	if (ac == 4)
	{
		if (the_small_num(list) == 0 && the_big_num(list) == 1)
		{
			rra(&ptr);
			swapA(&ptr);
		}
		else if (the_small_num(list) == 1 && the_big_num(list) == 2)
			swapA(&list);
		else if (the_small_num(list) == 2 && the_big_num(list) == 1)
			rra(&list);
		else if (the_small_num(list) == 2 && the_big_num(list) == 0)
		{
			swapA(&list);
			rra(&list);
		}
		else if (the_small_num(list) == 1 && the_big_num(list) == 0)
			rotateA(&list);
	}
}