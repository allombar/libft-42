/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:46:25 by alelomba          #+#    #+#             */
/*   Updated: 2023/03/29 12:46:25 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const char *tmp;
    size_t  i;

    i = 0;
    tmp = (const char *)s;
    while (i < n)
    {
        if (tmp[i] == c)
            return ((void *)(&(tmp[i])));
        i++;
    }
    return (0);
}