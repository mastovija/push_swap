/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgarside <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:47:15 by jgarside          #+#    #+#             */
/*   Updated: 2023/06/01 12:47:20 by jgarside         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// ft_strlcat concatenates the source string src to the destination
// string dst with a specified size limit size.
// It calculates the available space in the destination buffer
// and copies characters from the source string to the destination string
// while ensuring the limit is not exceeded. It appends a null
// terminator if there is space available.
// The function returns the total length of the concatenated string.
// the size_t size argument specifies the size of the
// destination buffer and serves as a limit
// for the concatenation operation, ensuring that it does not exceed the
// available space and helps prevent buffer overflows.

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	dst_index;
	size_t	src_index;

	src_len = ft_strlen(src);
	if (!dst && size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	dst_index = dst_len;
	if (size <= dst_index)
		return (size + src_len);
	src_index = 0;
	while (src[src_index] && dst_index + 1 < size)
	{
		dst[dst_index] = src[src_index];
		src_index++;
		dst_index++;
	}
	dst[dst_index] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	size_t		result;
	char		dest[20];
	const char	*src;
	size_t		result;

	result = ft_strlcat("pqrstuvwxyz", "abcd", 0);
	printf ("%zu", result);
	dest[20] = "Hello";
	src = "World!";
	result = ft_strlcat(dest, src, sizeof(dest));
	printf("Concatenated string: %s\n", dest);
	printf("Total length: %zu\n", result);
	return (0);
}
*/