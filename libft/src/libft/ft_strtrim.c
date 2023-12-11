/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 23:17:32 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:06:55 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*s2;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen((char *)s1);
	while (j && ft_strchr(set, s1[j]))
		j--;
	if (j == 0)
		k = 0;
	if (j != 0)
		k = ft_strlen((char *)s1) - j;
	s2 = (char *)malloc (ft_strlen((char *)s1) - k - i + 2 * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, &s1[i], j - i + 2);
	return (s2);
}
