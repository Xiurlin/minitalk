/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:05:37 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/11 11:14:02 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	handler(int signum, siginfo_t *info, void *context)
{
	static int	i;
	static char	c;

	(void) context;
	if (signum == SIGUSR1)
		c |= 1 << i;
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		kill(info->si_pid, SIGUSR2);
		i = 0;
		c = 0;
	}
}

void	signals(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = handler;
	sa.sa_flags = SA_SIGINFO;
	usleep(150);
	if (sigaction(SIGUSR1, &sa, NULL) == -1
		|| sigaction(SIGUSR2, &sa, NULL) == -1)
		ft_printf("Errorsito\n");
}

int	main(int argc, char **argv)
{
	(void) argv;
	if (argc != 1)
	{
		ft_printf("Correct use: ./server\n");
		exit(1);
	}
	ft_printf("PID: %d\n", getpid());
	while (1)
		signals();
	return (0);
}
