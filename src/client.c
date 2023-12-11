/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:05:39 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/11 11:14:07 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"
#include <stdio.h>

void	receive_signal(int signum)
{
	if (signum == SIGUSR2)
		ft_printf("Signal received!\n");
}

void	send_bits(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(150);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3 || argv[1][0] == '0')
	{
		ft_printf("Correct use: ./client SERVER_PID your_string\n");
		exit(1);
	}
	while (argv[2][i] != '\0')
	{
		signal(SIGUSR2, receive_signal);
		send_bits(ft_atoi(argv[1]), argv[2][i]);
		i++;
	}
	send_bits(ft_atoi(argv[1]), '\n');
	return (0);
}
