/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:50:49 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 09:53:45 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a whitespace character.
 *
 * This function checks if the given character `c` is a whitespace character.
 * Whitespace characters include: tab (\\t), newline (\\n), vertical tab (\\v),
 * form feed (\\f), carriage return (\\r), and space ( ).
 *
 * @param c The character to be checked.
 * @return 1 if the character is a whitespace character, 0 otherwise.
 */
int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

/**
 * @brief Converts a string to an integer.
 *
 * This function converts the initial portion of the string pointed to by `str`
 * to an integer. The function discards any whitespace characters until the first
 * non-whitespace character is found. Then, it takes an optional initial plus or
 * minus sign followed by as many numerical digits as possible and interprets
 * them as a numerical value.
 *
 * @param str The string to be converted.
 * @return The converted integer value.
 */
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
