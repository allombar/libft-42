/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 09:44:50 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/10 09:49:15 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
		*lst = new;
	else
	{
		while ((*lst)->next)
			*lst = (*lst)->next;
		(*lst)->next = new;
	}
}