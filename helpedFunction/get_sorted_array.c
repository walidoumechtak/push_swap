/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sorted_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:04:17 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 06:07:46 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *arr, int i, int j)
{
	int	temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int	*get_the_array(s_swap *stackA, int len)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(len * sizeof(int));
	while (i < len)
	{
		arr[i] = stackA->data;
		stackA = stackA->next;
		i++;
	}
	return (arr);
}

int	*get_sorted_array(s_swap *stackA, int len)
{
	int	*arr;
	int	i;
	int	j;

	arr = get_the_array(stackA, len);
	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(arr, j, j + 1);
			j++;
		}
		i++;
	}
	return (arr);
}
