/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnouredd <rnouredd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:59:03 by rnouredd          #+#    #+#             */
/*   Updated: 2025/12/18 22:06:16 by rnouredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_prinft.h"

int	check_char(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_print_pointer(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		count += ft_print_hex_small(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_print_hex_cap(va_arg(args, unsigned int));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += check_char(format[i + 1], args);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
