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

// The ft_strtrim function effectively removes leading
// and trailing characters from the input string 's1'
// based on the provided set of characters 'set',
// and returns the resulting trimmed string.

static int	is_character_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	trimmed_length;
	char	*trimmed_str;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (*start && is_character_in_set(*start, set))
		start++;
	while (end > start && is_character_in_set(*end, set))
		end--;
	trimmed_length = (end - start) + 1;
	trimmed_str = (char *)malloc((trimmed_length + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	ft_memcpy(trimmed_str, start, trimmed_length);
	trimmed_str[trimmed_length] = '\0';
	return (trimmed_str);
}
/*
int	main(void)
{
	char	str[];
	char	set[];
	char	*trimmed_str;

	str[] = "   Hello, world!   ";
	set[] = " ";
	trimmed_str = ft_strtrim(str, set);
	printf("Original string: \"%s\"\n", str);
	printf("Trimmed string: \"%s\"\n", trimmed_str);
	free(trimmed_str);
	return (0);
}
*/