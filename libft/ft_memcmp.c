/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:20:40 by drestrep          #+#    #+#             */
/*   Updated: 2022/09/12 05:30:31 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	i = 0;
	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (a[i] == b[i] && i < n - 1)
	{
		i++;
		if (a == b)
			return (0);
	}
	return (a[i] - b[i]);
}
