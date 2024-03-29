/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   desc_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:31:10 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 17:03:11 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*desc_array(t_swap *list, int len)
{
	int	i;
	int	*arr1;
	int	*arr2;

	i = 0;
	arr1 = get_sorted_array(list, len + 1);
	arr2 = malloc((len + 1) * sizeof(int));
	while (len >= 0)
	{
		arr2[i] = arr1[len];
		len--;
		i++;
	}
	free(arr1);
	return (arr2);
}
