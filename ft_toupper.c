/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:28:22 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 09:29:17 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * If the input character is a lowercase letter (a-z), it is converted to the
 * corresponding uppercase letter (A-Z). Otherwise, the character is returned
 * unchanged.
 *
 * @param c The character to be converted.
 * @return The uppercase equivalent of the character if it is a lowercase letter,
 * otherwise the character itself.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
