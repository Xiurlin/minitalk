/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 06:19:54 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:02:44 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf/ft_printf.h"

void	ft_hexadecimal(unsigned int nbr, int *len, char c)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nbr > 15)
	{
		ft_hexadecimal(nbr / 16, len, c);
		nbr = nbr % 16;
	}
	ft_putchar(base[nbr], len);
}
