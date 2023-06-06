/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:56:13 by alelomba          #+#    #+#             */
/*   Updated: 2023/05/04 09:32:47 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (0);
	if (haystack[0] == '\0')
		return (0);
	i = 0;
	while (len >= needle_len)
	{
		if (!(ft_memcmp(&haystack[i], needle, needle_len)))
			return ((char *)(&(haystack[i])));
		i++;
		len--;
	}
	return (0);
}
