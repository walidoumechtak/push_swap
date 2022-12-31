/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:42 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/31 14:20:02 by woumecht         ###   ########.fr       */
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
		if (((*stackA)->index < size_chunk * size))
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

//======================================================================================

int bige(s_swap *list)
{
    s_swap  *ptr;
    int max;
    
    max = list -> data;
    list = list -> next;
    ptr = list;
    while (ptr != NULL)
    {
        if (ptr -> data > max)
            max = ptr -> data;
        ptr = ptr -> next;
    }
    return (max);
}


void	ft_role(s_swap **stackB,int size_stack, int bigE)
{
	int	index;
	
	// s_swap **ptr;

	// ptr = stackB;
	// index = index_from_stack(*stackB, bigE);
	index = bigE;
	if (size_stack  >= 0)
	{
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
}

void	go_back_to_a(s_swap **stackA, s_swap **stackB)
{
	int	bigE;
	int	size_stack;
	
	size_stack = list_size(*stackB);
	while ((*stackB) != NULL)
	{
		if (size_stack == 0)
			break;
		bigE = the_big_num(*stackB);
		ft_role(stackB, size_stack, bigE);
		// printf("-------------  %d -------------\n", (*stackB)->index);
		pushA(stackA, stackB);
		size_stack--;
		// printf("/-- %d --/", bigE);
	}
}


void	big_stack(s_swap **stackA, s_swap **stackB, int nm)
{
    push_to_b(stackA, stackB, nm);
	go_back_to_a(stackA,stackB);
	// while ((*stackB) != NULL)
    // {
    //     printf("%d", (*stackB)->data);
    //     (*stackB) = (*stackB)->next;
    // }
}