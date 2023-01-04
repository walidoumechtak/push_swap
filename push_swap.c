/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:08:59 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/04 15:02:29 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(s_swap **list, int ac, s_swap **stackB)
{
	if (ac == 3)
	{
		if (((*list)->data) > ((*list)->next->data))
			swapA(list);
	}
	else if (ac == 4)
		three(list, ac);
	else if (ac <= 21)
		s_five(list, stackB, ac);
	else if (ac <= 101)
		big_stack(list, stackB, 4);
	else if (ac > 101)
		big_stack(list, stackB, 9);
}

int	main(int ac, char **av)
{
	s_swap *stackB;
	int i;
	int cpt;
	s_swap *head;

	stackB = NULL;
	if (ac > 1)
	{
		if (isall_digit(av, ac - 1) == 0 || (isnot_repeated(av, ac - 1) == 0)
			|| (isnot_big_int(av, ac - 1) == 0))
		{
			ft_putstr("Error\n");
			return (0);
		}
		i = 2;
		cpt = ac - 2;
		head = lst_new(ft_atoi(av[1]));
		while (cpt > 0)
		{
			add_back(&head, lst_new(ft_atoi(av[i])));
			i++;
			cpt--;
		}
		if (is_inputs_sorted(av, ac - 1))
			return (0);

		index_the_stack(head);
		push_swap(&head, ac, &stackB);
		lst_clear(&stackB);
		// while ((ac - 1) > 0)
		// {
		// 	printf("%d ", head->index);
		// 	head = head->next;
		// 	ac--;
		// }
	}
	// system("leaks push_swap");
	return (0);
}