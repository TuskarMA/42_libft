/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:29:40 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 09:30:32 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * If the input character is an uppercase letter (A-Z), it is converted to the
 * corresponding lowercase letter (a-z). Otherwise, the character is returned
 * unchanged.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of the character if it is an
 * uppercase letter,
 * otherwise the character itself.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
