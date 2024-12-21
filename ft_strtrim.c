/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:36:42 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 12:26:40 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(const char *set, char c);
static char	*new_str(const char *s1, size_t start, size_t end);

/**
 * @brief Trims the characters in the set from the beginning
 * and end of the string.
 *
 * @param s1 The original string.
 * @param set The set of characters to trim.
 * @return A pointer to the newly allocated trimmed string,
 * or NULL if allocation fails.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (new_str(s1, i, j - (i - 1)));
}

/**
 * @brief Creates a new string from the given start
 * index and length.
 *
 * @param s1 The original string.
 * @param start The starting index of the new string.
 * @param len The length of the new string.
 * @return A pointer to the newly allocated string,
 * or NULL if allocation fails.
 */
static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

/**
 * @brief Checks if a character is in the set of
 * characters to trim.
 *
 * @param set The set of characters.
 * @param c The character to check.
 * @return 1 if the character is in the set, 0 otherwise.
 */
static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
