/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:56:13 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/08 11:18:26 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needleLen;
	
	needleLen = ft_strlen(needle);
	if (!needleLen)
		return ((char *)haystack);

	i = 0;
	while (haystack[i] && len >= needleLen)
	{
		if (ft_memcmp(&haystack[i], needle, needleLen) == 0)
			return ((char *)(&(haystack[i])));
		i++;
		len--;
	}
	return (0);
}
