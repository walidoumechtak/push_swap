/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:44:25 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/05 08:18:59 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(s_swap **head, char **av, int ac)
{
	int	i;
	int	cpt;

	i = 2;
	cpt = ac - 2;
	(*head) = lst_new(ft_atoi(av[1]));
	while (cpt > 0)
	{
		add_back(head, lst_new(ft_atoi(av[i])));
		i++;
		cpt--;
	}
}
