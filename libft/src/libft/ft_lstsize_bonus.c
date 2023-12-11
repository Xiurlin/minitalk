/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 01:06:15 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:05:37 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		i;

	aux = lst;
	i = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
