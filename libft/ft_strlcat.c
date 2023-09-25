/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:18:54 by drestrep          #+#    #+#             */
/*   Updated: 2022/09/12 05:32:53 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dst);
	if (dstsize == 0)
		return (j);
	if (dstsize < k)
		return (j + dstsize);
	while ((i + k) < (dstsize - 1) && src[i] != '\0')
	{
		((char *)dst)[k + i] = ((char *)src)[i];
		i++;
	}
	dst[k + i] = '\0';
	i = j + k;
	return (i);
}
