/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:11:09 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 13:34:48 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills the first `len` bytes of the memory
 * area pointed to by `b` with the constant byte `c`.
 *
 * @param b Pointer to the memory area to be filled.
 * @param c The byte value to be set.
 * @param len The number of bytes to be set to the value.
 * @return A pointer to the memory area `b`.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}
