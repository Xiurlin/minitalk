/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 05:25:07 by drestrep          #+#    #+#             */
/*   Updated: 2023/09/25 08:36:21 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	main(int argc, char **argv)
{
	int		pid;

	if (argc != 1)
	{
		ft_printf("Correct use: ./server\n");
		exit(1);
	}
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	while (1)
		sleep(0.1);
	return (0);
}
