/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:00:21 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:06:03 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

void	print(int fd, char n)
{
	write (fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		print (fd, '-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
		return ;
	}
	if (n == -2147483648)
	{
		write (fd, "2147483648", 10);
		return ;
	}
	c = n + 48;
	write (fd, &c, 1);
}
