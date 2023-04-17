/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:09:32 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/14 16:22:00 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	tab = malloc(count * size);
	if (!tab)
		return (0);
	ft_bzero(tab, count * size);
	return (tab);
}
