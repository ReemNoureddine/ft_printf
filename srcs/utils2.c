/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnouredd <rnouredd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 20:09:53 by rnouredd          #+#    #+#             */
/*   Updated: 2025/12/18 22:11:53 by rnouredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_prinft.h"

int	ft_print_hex_cap(unsigned int nb)
{
	int			count;
	const char	*hex;

	hex = "0123456789ABCDEF";
	count = 0;
	if (nb >= 16)
		count += ft_print_hex_cap(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}

static int	ft_print_hex_ptr(unsigned long long nb)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
		count += ft_print_hex_ptr(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	count;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count = 0;
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += ft_print_hex_ptr(ptr);
	return (count);
}
