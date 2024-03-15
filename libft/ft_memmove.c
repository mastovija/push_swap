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

// ft_memmove function copies a specified number of bytes
// from the source memory block to the destination memory block,
// handling potential overlap between the two memory blocks
// to ensure a safe and correct copy operation.
// It uses type casting to treat the pointers dest and src as pointers
// to unsigned char, allowing copying of individual bytes.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}
/*
int	main(void) {
	char str1[] = "Hello, World!";
	char str2[] = "Goodbye, World!";
	size_t n = strlen(str1) + 1;

	printf("Before ft_memmove:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	ft_memmove(str2, str1, n);

	printf("\nAfter ft_memmove:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return (0);
}
*/