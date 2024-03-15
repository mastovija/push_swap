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

// The ft_strnstr function searches for the first occurrence of a substring
// (to_find) within a given string (str) up to a maximum length (len).
// It returns a pointer to the first occurrence of the substring
// within the string, or NULL if the substring is not found.

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !len)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void) {
	const char* haystack = "Hello, world!";
	const char* needle = "world";
	size_t len = strlen(haystack);

	char* result = ft_strnstr(haystack, needle, len);
	if (result != NULL) {
		printf("Needle found at position %ld: %s\n", result - haystack, result);
	} else {
		printf("Needle not found.\n");
	}

	return (0);
}
*/