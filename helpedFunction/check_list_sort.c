/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:42:46 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:39:12 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_list_sort(t_swap *list)
{
	int		test;
	t_swap	*ptr1;

	if (!list || list_size(list) < 2)
		return (1);
	ptr1 = list;
	test = 0;
	while (ptr1->next != NULL)
	{
		if (ptr1->data < ptr1->next->data)
			test = 1;
		else
		{
			test = 0;
			break ;
		}
		ptr1 = ptr1->next;
	}
	return (test);
}
