/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:08:59 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/14 22:10:25 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(s_swap *list, int ac)
{
	s_swap	*ptr;
	
	ptr = list;
	if (ac == 3)
	{
		if ((ptr -> data) < (ptr -> next -> data))
			swapA(list);
			//printf("swapA");
	}
	
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		s_swap *head;
		int i;
		int cpt;

		i = ac - 2;
		cpt = ac - 2;
		head = lst_new(ft_atoi(av[ac - 1]));
		while (cpt > 0)
		{
			add_back(&head, lst_new(ft_atoi(av[i])));
			i--;
			cpt--;
		}
		if (is_inputs_sorted(av, ac - 1))
			return (0);
		push_swap(head, ac);
		// while ((ac - 1) > 0)
		// {
		//     printf("%d", head -> data);
		//     head = head -> next;
		//     ac--;
		// }
	}
    return (0);
}