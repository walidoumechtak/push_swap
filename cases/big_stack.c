/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:42 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 06:39:57 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_b(s_swap **stackA, s_swap **stackB, int n)
{
	s_swap	*ptr;
	int		size_stack;
	int		size_chunk;
	int		cpt;
	int		size;

	cpt = 0;
	ptr = *stackA;
	size_stack = list_size(ptr);
	size_chunk = size_stack / n;
	size = 1;
	while ((*stackA) != NULL)
	{
		if (((*stackA)->index <= size_chunk * size))
		{
			pushb(stackA, stackB);
			cpt++;
			if ((*stackB)->index >= ((size_chunk * size)) - (size_chunk / 2))
				rotateb(stackB);
		}
		else
			rotateA(stackA);
		if (cpt == size_chunk * size)
			size++;
	}
}

void	go_back_to_a(s_swap **stackA, s_swap **stackB)
{
	int	cpt;
	int	*arr;
	int	len;
	int	index;
	int	i;

	i = 0;
	len = list_size(*stackB) - 1;
	cpt = 0;
	arr = desc_array(*stackB, len);
	while (*stackB != NULL)
	{
		index = ft_index_of(*stackB, arr[i]);
		if (index != -1)
		{
			if ((*stackB)->data == arr[i])
			{
				pusha(stackA, stackB);
				i++;
			}
			else if (cpt == 0 || (*stackB)->data > get_last_lst(*stackA)->data)
			{
				pusha(stackA, stackB);
				rotatea(stackA);
				cpt++;
			}
			else
				ft_role(stackB, list_size(*stackB), index);
		}
		else
		{
			rra(stackA);
			cpt--;
			i++;
		}
	}
	i = 0;
	while (cpt >= 0)
	{
		rra(stackA);
		cpt--;
	}
	if ((*stackA)->data > arr[len])
		rotatea(stackA);
	free(arr);
}

void	big_stack(s_swap **stackA, s_swap **stackB, int nm)
{
	push_to_b(stackA, stackB, nm);
	go_back_to_a(stackA, stackB);
}
