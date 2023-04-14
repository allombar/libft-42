/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 21:27:26 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/10 21:29:50 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*deb;
	t_list	*new;

	if (!lst || !(deb = ft_lstnew(f(lst->content))))
		return (0);
	new = deb;
	while (lst->next)
	{
		lst = lst->next;
		new = new->next;
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&deb, del);
			return (0);
		}
	}
	return (deb);
}