/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnouredd <rnouredd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:18:41 by rnouredd          #+#    #+#             */
/*   Updated: 2025/12/18 22:09:05 by rnouredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_prinft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_print_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
		count += ft_print_unsigned(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_print_hex_small(unsigned int nb)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
		count += ft_print_hex_small(nb / 16);
	count += ft_putchar((hex[nb % 16]));
	return (count);
}
