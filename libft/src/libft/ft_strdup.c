/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:41:43 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:06:19 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;	
	size_t	j;
	char	*s2;

	i = 0;
	j = 0;
	while (s1[j])
		j++;
	s2 = (char *)malloc((j + 1) * sizeof (const char));
	if (s2 == NULL)
		return (NULL);
	while (i < j)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
