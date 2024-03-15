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

// ft_memchr function searches for a character c
// within a memory block str of n bytes.
// It returns a pointer to the first occurrence of the character
// if found, or NULL if the character is not present in the memory block.
// In this code, str is a void pointer,
// which means it can point to any type of data.
// To perform byte-level operations, it is cast to an
// unsigned char pointer using (unsigned char *)str.
// This allows accessing individual bytes in the memory block.

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (((unsigned char *)str) + i);
		i++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "hello.school.42";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, 20);

   printf("%s\n", ret);

   return(0);
}
*/
