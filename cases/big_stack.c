/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:42 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/03 18:46:12 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_role(s_swap **stackB,int size_stack, int bigE)
{
	int	index;
	
	index = bigE;
	
		if (index < size_stack / 2)
		{
			while (index-- > 0)
				rotateB(stackB);
		}
		else
		{
			while (index++ < size_stack)
				rrb(stackB);
		}
}

int	*desc_array(s_swap *list, int len)
{
	int	i;
	int	*arr1;
	int	*arr2;

	i = 0;
	arr1 = get_sorted_array(list, len+1);
	arr2 = malloc((len+1) * sizeof(int));
	while (len >= 0)
	{
		arr2[i] = arr1[len];
		len--;
		i++;
	}
	free(arr1);
	return (arr2);
}



void	push_to_b(s_swap **stackA, s_swap **stackB, int n)
{
	s_swap *ptr;
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
			pushB(stackA, stackB);
			cpt++;
			if ((*stackB)->index >= ((size_chunk * size)) - (size_chunk / 2))
				rotateB(stackB);
		}
		else
			rotateA(stackA);
		
		if (cpt == size_chunk * size)
			size++;
	}
}

int	ft_index_of(s_swap *list, int n)
{
	int	i;

	i = 0;
	while (list != NULL)
	{
		if (list -> data == n)
		{
			return (i);
		}
		i++;
		list = list -> next;
	}
	return (-1);
}

void	go_back_to_a(s_swap **stackA, s_swap **stackB)
{
	int	cpt;
	int	*arr;
	int len;
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
				pushA(stackA, stackB);
				i++;
			}
			else if (cpt == 0 || (*stackB)->data > get_last_lst(*stackA)->data)
			{
				pushA(stackA, stackB);
				rotateA(stackA);
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
	free(arr);
}

void	big_stack(s_swap **stackA, s_swap **stackB, int nm)
{
    push_to_b(stackA, stackB, nm);
	go_back_to_a(stackA,stackB);
}