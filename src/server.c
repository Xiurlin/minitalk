/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 05:25:07 by drestrep          #+#    #+#             */
/*   Updated: 2023/11/13 18:40:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	handler(int signum)
{
	static int i;
	static char c;

	if (signum == SIGUSR1)
		c |= 0 << i;
	else if (signum == SIGUSR2)
		c |= 1 << i;
	i++;
	if (i == 8)
	{
		write (1, &c, 1);
		i = 0;
		c = 0;
	}
}

void	signals(void)
{
	struct sigaction sa;

	sa.sa_handler = handler;
	sa.sa_flags = 0;
	if (sigaction(SIGUSR1, &sa, NULL) == -1 || sigaction(SIGUSR2, &sa, NULL) == -1)
		write(2, "ERROR\n", 6);
}

int	main(void)
{
	int		pid;

	pid = getpid();
	ft_printf("PID: %d\n", pid);
	while (1)
		signals();
	return (0);
}
