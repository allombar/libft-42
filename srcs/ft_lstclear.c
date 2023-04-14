/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 21:04:50 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/11 15:04:33 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void ft_lstclear(t_list **lst, void (*del)(void *))
//{
//	t_list *tmp;
	
//	if (!lst || !del)
//		return ;
//	while (lst)
//	{
//		tmp = (*lst)->next;
//		ft_lstdelone(*lst, del);
//		*lst = tmp;
//	}
//	*lst = NULL;
//}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!(*lst))
		return ;

	ft_lstclear(&((*lst)->next), del);
	ft_lstdelone((*lst), del);
	*lst = NULL;
}