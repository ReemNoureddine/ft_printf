/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnouredd <rnouredd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:53:03 by rnouredd          #+#    #+#             */
/*   Updated: 2025/12/18 22:04:59 by rnouredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINFT_H
# define FT_PRINFT_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	check_char(char c, va_list args);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_print_unsigned(unsigned int nb);
int	ft_print_hex_small(unsigned int nb);
int	ft_print_hex_cap(unsigned int nb);
int	ft_print_pointer(unsigned long long ptr);

#endif