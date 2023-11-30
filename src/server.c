/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 05:25:07 by drestrep          #+#    #+#             */
/*   Updated: 2023/11/30 13:52:21 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"
#include <stdio.h>

void	handler(int signum, siginfo_t *info, void *context)
{
	static int	i;
	static char	c;

	(void) info;
	(void) context;
	if (signum == SIGUSR1)
		c |= 1 << i;
	i++;
	if (i == 8)
	{
		printf("%c", c);
		i = 0;
		c = 0;
	}
}

void	signals(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = handler;
	sa.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa, NULL) == -1
		|| sigaction(SIGUSR2, &sa, NULL) == -1)
		printf("Errorsito\n");
}

int	main(void)
{
	printf("PID: %d\n", getpid());
	while (1)
		signals();
	return (0);
}
