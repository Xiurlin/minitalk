/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:34:22 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:06:31 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (dstsize == 0)
		return (j);
	if (dstsize != 0)
	{
		while (i < (dstsize - 1) && src[i] != '\0')
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
