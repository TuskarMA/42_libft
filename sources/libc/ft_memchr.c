/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:44:03 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 09:45:18 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans a memory area for a specific byte.
 *
 * This function searches for the first occurrence of the byte `c`
 * (converted to an unsigned char) in the first `n` bytes of the memory
 * area pointed to by `s`.
 *
 * @param s Pointer to the memory area to be scanned.
 * @param c Byte to be located.
 * @param n Number of bytes to be scanned.
 * @return A pointer to the first occurrence of the byte `c` in the memory
 * area `s`, or NULL if the byte is not found within the first `n` bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
