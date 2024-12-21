/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:48:03 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 12:26:40 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a substring in a string, where not
 * more than `len` characters are searched.
 *
 * This function locates the first occurrence of the
 * null-terminated string `needle` in the
 * string `haystack`, where not more than `len` characters
 * are searched. Characters that appear
 * after a `\0` character are not searched.
 *
 * @param haystack The string to be searched.
 * @param needle The substring to be located.
 * @param len The maximum number of characters to search.
 * @return A pointer to the first occurrence of `needle` in
 * `haystack`, or NULL if `needle` is not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
