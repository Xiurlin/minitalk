/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 05:23:46 by drestrep          #+#    #+#             */
/*   Updated: 2023/11/13 17:48:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	send_str(int pid, char *str)
{
	int	bit;
	int	i;

	while (*str)
	{
		i = 8;
		while (i < 8)
		{
			bit = *str >> 1 & 1;
			if (bit == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;

	if (argc != 3)
	{
		ft_printf("Correct use: ./client SERVER_PID your_string\n");
		exit(1);
	}
	ft_printf("PID: %d\n", get_pid());
	send_str(pid, argv[2]);
	return (0);
}
