/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddivaev <ddivaev@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:22:46 by ddivaev           #+#    #+#             */
/*   Updated: 2024/12/21 09:26:03 by ddivaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to `dstsize - 1` characters from the
 * NUL-terminated string `src` to `dst`,
 * NUL-terminating the result.
 *
 * @param dst Pointer to the destination buffer.
 * @param src Pointer to the source string.
 * @param dstsize Size of the destination buffer.
 * @return The total length of the string it tried to create,
 * which is the length of `src`.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}
