/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:38:32 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 09:42:04 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * This function searches for the last occurrence of the character `c`
 * (converted to a char) in the string pointed to by `s`. The terminating
 * null character is considered part of the string.
 *
 * @param s Pointer to the null-terminated string to be scanned.
 * @param c Character to be located.
 * @return A pointer to the last occurrence of the character `c` in the
 * string `s`, or NULL if the character is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			cc;

	cc = (char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		res = (char *) &s[i];
	return (res);
}
