/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:23:52 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:04:39 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*k;

	i = 0;
	k = (char *) s;
	while (i < n)
		k[i++] = 0;
}
