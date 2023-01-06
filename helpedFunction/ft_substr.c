/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:03:56 by woumecht          #+#    #+#             */
/*   Updated: 2023/01/06 14:54:51 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	j;
	size_t	len_str;

	if (s == NULL)
		return (NULL);
	len_str = ft_strlen(s);
	if (start >= len_str)
		return (ft_strdup(""));
	if (len_str - start < len)
		len = len_str - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	j = 0;
	while (j < len)
	{
		ptr[j] = ((char *)s)[start];
		start++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
