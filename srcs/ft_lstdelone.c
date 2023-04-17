/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 09:53:23 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/14 16:30:02 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((!lst) || (!del))
		return ;
	del(lst->content);
	free(lst);
}