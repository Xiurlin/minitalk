/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 04:41:47 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:03:02 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf/ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	long int	i;

	i = nbr;
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (i < 0)
	{
		write(1, "-", 1);
		(*len)++;
		ft_putnbr(i * -1, len);
	}
	else
	{
		if (i > 9)
			ft_putnbr(i / 10, len);
		ft_putchar(i % 10 + '0', len);
	}
}
