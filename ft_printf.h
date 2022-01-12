/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:24:05 by hkaddour          #+#    #+#             */
/*   Updated: 2022/01/12 20:01:15 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char s);
int ft_unsigned(size_t n);
int	ft_printf(const char *str, ...);
int	ft_params(char str, int i, va_list args);

#endif
