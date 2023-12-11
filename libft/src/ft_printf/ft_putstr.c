/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 04:30:56 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:03:11 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf/ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i], len);
		i++;
	}
}
