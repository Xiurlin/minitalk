/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:49:34 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:05:24 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!(lst && f))
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
