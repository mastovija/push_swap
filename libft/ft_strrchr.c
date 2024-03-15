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

// The ft_strrchr function searches for the last occurrence
// of a specific character c within a given string str.
// It returns a pointer to the last occurrence of the character
// in the string or NULL if the character is not found.

char	*ft_strrchr(const char *s, int c)
{
	char	target;
	int		i;

	target = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == target)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "hello.school.42";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("%s\n", ret);

   return(0);
}
*/