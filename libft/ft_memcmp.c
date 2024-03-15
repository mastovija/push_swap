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

// ft_memcmp function compares two memory blocks byte by byte,
// returning 0 if they are equal or a non-zero value
// indicating the difference between the first differing bytes.
// First we create two 'unsigned char' pointers and assigns
// them the casted values of 'str1' and 'str2'.
// This allows treating the memory blocks as arrays of
//'unsigned char' elements for byte-lever comparison.
// It checks if the current bytes pointed to by
// ptr1 and ptr2 are equal with *ptr1 == *ptr2.
// It also ensures that there are still bytes remaining to
// compare by checking n
//- 1 > 0. This prevents accessing beyond the specified number of bytes.

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while ((*ptr1 == *ptr2) && n - 1 > 0)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return ((int)(*ptr1 - *ptr2));
}
/*
int main () {

   char *str1 = "abcdef";
   char *str2 = "ABCDEF";
   int ret;
   ret = ft_memcmp(str1, str2, 5);

   printf("%i", ret);

   return(0);
}
*/