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

// The ft_strlcpy function is a string manipulation function
// that copies a source string (src) to a destination string (dest)
// while ensuring that the destination string is properly terminated
// and does not overflow its allocated space.
// Provides a safer alternative to 'strcpy' by taking an additional
// argument 'size' that specifies the size
// of the destination buffer.

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char		dest[10];
	const char	*src;
	size_t		copied;

	src = "Hello, world!";
	copied = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied: %zu\n", copied);
	printf("Destination: %s\n", dest);
	return (0);
}
*/