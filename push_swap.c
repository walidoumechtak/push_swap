/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:08:59 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/19 15:53:56 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(s_swap *list, int ac)
{
	if (ac == 3)
	{
		if ((list->data) > (list->next->data))
			swapA(&list);
	}
	else if (ac == 4)
		push_3_swap(list, ac);
	else if (ac == 6)
		s_five(&list);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		s_swap *head;
		int i;
		int cpt;

		i = 2;
		cpt = ac - 2;
		head = lst_new(ft_atoi(av[1]));
		while (cpt > 0)
		{
			add_back(&head, lst_new(ft_atoi(av[i])));
			i++;
			cpt--;
		}
		if (is_inputs_sorted(av, ac - 1) || !isall_digit(av, ac - 1)
			|| !isnot_repeated(av, ac - 1 || !isnot_big_int(av, ac - 1)))
			return (0);
		push_swap(head, ac);
		// while ((ac - 1) > 0)
		// {
		// 	printf("%d", head->data);
		// 	head = head->next;
		// 	ac--;
		// }
	}
	return (0);
}