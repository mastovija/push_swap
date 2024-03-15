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

// The ft_split function takes a string 's' and a delimiter
// character 'c' and splits the string into an array of words.
// It allocates memory for the array and each word,
// and returns the resulting array of strings.
// The words are determined by splitting the string
// at occurrences of the delimiter character 'c'.
// The array of strings ends with a NULL pointer to mark the end.
// If memory allocation fails, the function returns NULL.

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (NULL);
}

static unsigned int	ft_count_words(char const *str, char c)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (count);
}

static char	*ft_putword(char const *start, char const *end)
{
	size_t	len;
	char	*word;

	len = end - start;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, start, len + 1);
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2,
		unsigned int num_words)
{
	unsigned int	word;
	const char		*start;

	word = 0;
	while (word < num_words)
	{
		while (*s && *s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		if (start != s)
		{
			s2[word] = ft_putword(start, s);
			if (!s2[word])
				return (free_array(s2, word));
			word++;
		}
	}
	s2[word] = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	num_words;
	char			**s2;

	if (!s)
		return (NULL);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!s2)
		return (NULL);
	s2 = ft_split_words(s, c, s2, num_words);
	return (s2);
}
/*
int	main(void)
{
	const char	*s;
	char		**words;

	s = "Hello, world! This is a sample string.";
	words = ft_split(s, ' ');
	if (words == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original string: %s\n", s);
	printf("Split words:\n");
	for (int i = 0; words[i] != NULL; i++)
	{
		printf("%s\n", words[i]);
	}
	for (int i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}
	free(words);
	return (0);
}
*/