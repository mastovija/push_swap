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

// ft_strchr searches for a specific character c in the string str.
// If the character is found,
// it returns a pointer to that character within the string.
// If the character is not found or the end of the string is reached,
// it returns NULL.

char	*ft_strchr(const char *s, int c)
{
	char	target;

	target = (char)c;
	while (*s != target)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/*
int main ()
{
	const char	str[];
	const char	ch;
   char *ret;

   str[] = "hello.school.42";
   ch = '.';
   ret = ft_strchr(str, ch);
   printf("%s\n", ret);
   return(0);
}
*/