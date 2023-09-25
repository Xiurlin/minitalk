/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 05:23:46 by drestrep          #+#    #+#             */
/*   Updated: 2023/09/25 08:47:24 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	server_pid;

void	sigusr1_handler(int sigtype)
{
	
}

int	main(int argc, char **argv)
{
	struct sigaction signal;
	signal.sa_handler = &sigusr1_handler;
	//signal.__sigaction_u.__sa_handler = &handle_sigsur1;
	int		pid;

	if (argc != 3)
	{
		ft_printf("Correct use: ./client SERVER_PID your_string\n");
		exit(1);
	}
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	server_pid = ft_atoi(argv[1]);
	printf("Server pid: %d\n", server_pid);
	sigaction(SIGUSR1, &signal, NULL);
	return (0);
}
