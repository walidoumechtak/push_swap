/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <woumecht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:29:10 by woumecht          #+#    #+#             */
/*   Updated: 2022/12/12 10:22:29 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;
	int		cpp;

	i = 0;
	cpp = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			cpp += ft_vprintf(ptr, i + 1, (char *)s);
			i++;
		}
		else if (s[i] != '%')
			cpp += ft_putchar(s[i]);
		i++;
	}
	va_end(ptr);
	return (cpp);
}
