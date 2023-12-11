/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:27:20 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:06:24 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	if (!(s && f))
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
