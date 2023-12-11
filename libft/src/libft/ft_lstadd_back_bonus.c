/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 01:32:04 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:05:04 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (lst)
	{
		if (*lst != NULL)
		{
			aux = *lst;
			while (aux->next)
				aux = aux->next;
			aux->next = new;
			return ;
		}
		*lst = new;
		return ;
	}
}
