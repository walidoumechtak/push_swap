/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:42 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/27 21:20:26 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	nb_in_chunck(int *arr, int end, int nb)
{
	int	i;

	i = 0;
	while (i <= end)
	{
		if (arr[i] == nb)
			return (nb);
		i++;
	}
	return (0);
}

void	push_to_b(s_swap **stackA, s_swap **stackB, int n)
{
	s_swap	*ptr;
	int		size_stack;
	int		size_chunk;
	int		cpt;
	int		start;
	int		end;

	cpt = 0;
	size_stack = list_size(*stackA);
	size_chunk = size_stack / n;
	ptr = *stackA;
	start = 0;
	end = size_chunk;
	while ((*stackA) != NULL)
	{
		if ((*stackA)->index < size_chunk && ((*stackA)->index < size_chunk / 2)
			&& (*stackA)->index > start)
		{
			pushB(stackA, stackB);
			cpt++;
		}
		else if ((*stackA)->index < size_chunk
				&& ((*stackA)->index >= size_chunk / 2)
				&& (*stackA)->index > start)
		{
			pushB(stackA, stackB);
			cpt++;
			rotateB(stackB);
		}
		else
			rra(stackA);
		if (cpt == size_chunk)
		{
			size_chunk *= 2;
			start += 20;
		}
	}
}

void	big_stack(s_swap **stackA, s_swap **stackB, int nm)
{
    push_to_b(stackA, stackB, nm);
    while ((*stackB) != NULL)
    {
        printf("%d", (*stackB)->data);
        (*stackB) = (*stackB)->next;
    }
}