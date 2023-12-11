/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:05:09 by drestrep          #+#    #+#             */
/*   Updated: 2023/12/06 18:05:19 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!(lst || del))
		return ;
	del(lst -> content);
	free(lst);
}
