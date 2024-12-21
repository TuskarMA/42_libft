/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:31:47 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 13:35:14 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * This function searches for the first occurrence of the character `c`
 * (converted to a char) in the string pointed to by `s`. The terminating
 * null character is considered part of the string.
 *
 * @param s Pointer to the null-terminated string to be scanned.
 * @param c Character to be located.
 * @return A pointer to the first occurrence of the character `c` in the
 * string `s`, or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	char			cc;
	unsigned int	i;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
