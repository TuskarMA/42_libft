/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:41:30 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 12:35:08 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c);
static char	*fill_word(const char *str, int start, int end);
static void	*ft_free(char **strs, int count);
static void	ft_split_helper(const char *s, char c, char **res, int *s_word);

/**
 * @brief Counts the number of words in the string separated by the delimiter.
 *
 * @param str The string to count words in.
 * @param c The delimiter character.
 * @return The number of words in the string.
 */
static int	word_count(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

/**
 * @brief Creates a new string from the given start and end indices.
 *
 * @param str The original string.
 * @param start The starting index of the new string.
 * @param end The ending index of the new string.
 * @return A pointer to the newly allocated string, or NULL if allocation fails.
 */
static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

/**
 * @brief Frees the allocated memory for the result array.
 *
 * @param strs The result array to free.
 * @param count The number of strings in the array.
 * @return NULL.
 */
static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

/**
 * @brief Helper function to split the string and fill the result array.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 * @param res The result array to fill.
 * @param s_word Pointer to the start index of the current word.
 */
static void	ft_split_helper(const char *s, char c, char **res, int *s_word)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && *s_word < 0)
			*s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && *s_word >= 0)
		{
			res[j] = fill_word(s, *s_word, i);
			if (!(res[j]))
			{
				ft_free(res, j);
				return ;
			}
			*s_word = -1;
			j++;
		}
		i++;
	}
}

/**
 * @brief Splits a string into an array of strings using a delimiter.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 * @return A pointer to an array of strings, or NULL if allocation fails.
 */
char	**ft_split(const char *s, char c)
{
	char	**res;
	int		s_word;

	s_word = -1;
	res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	ft_split_helper(s, c, res, &s_word);
	return (res);
}
