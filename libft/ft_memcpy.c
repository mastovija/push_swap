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

// ft_memcpy function copies a specified number of bytes
// from the source memory block to the destination memory block,
// ensuring that the operation is safe and avoids
// issues with overlapping memory blocks.
// By casting dest and src to unsigned char*, the code treats
// the memory blocks as arrays of unsigned characters,
// allowing byte-level access.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int main ()
{
	const char	src[50];
   char dest[50];

   src[50] = "hello";
   ft_memcpy(dest, src, 3);
   printf("After ft_memcpy dest = %s\n", dest);
   return(0);
}
*/
