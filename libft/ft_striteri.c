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

// The ft_striteri function takes a string 's' and applies a given function
// 'f' to each character of the string along with its corresponding index.
// It modifies the string in-place.
// The purpose of ft_striteri is to allow you to iterate over each character
// of a string and perform some operation on each character based on its index.
// This can be useful for modifying the characters in-place or performing
// any other operation that requires access to the index and character.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
// Function to print the index and character of a string
void	print_index_chars(unsigned int index, char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
		*ch -= 32;
}
int	main(void)
{
	char	str[];

	str[] = "Hello, World!";
	printf("Original String: %s\n", str);
	// Apply printIndexChar function to each character in the string
	ft_striteri(str, printIndexChar);
	printf("Modified String: %s\n", str);
	return (0);
}
*/