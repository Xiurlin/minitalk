/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:35:24 by drestrep          #+#    #+#             */
/*   Updated: 2023/04/23 04:22:23 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(char const *str, ...);
void	ft_datatype(va_list list, char c, int *len, int *i);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putptr(size_t ptr, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_unsigned_int(int var, int *len);
void	ft_hexadecimal(unsigned int nbr, int *len, char c);

#endif
