/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:44:25 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 16:10:52 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		free(str[i]);
		i++;
	}
}

void	fill_stack(s_swap **head, char **av, int ac)
{
	char	**s;
	int		i;
	int		j;

	(*head) = NULL;
	i = 1;
	while (i < ac)
	{
		j = 0;
		s = ft_split(av[i], ' ');
		while (s[j] != 0)
		{
			add_back(head, lst_new(ft_atoi(s[j])));
			j++;
		}
		free_all(s);
		free(s);
		i++;
	}
}
