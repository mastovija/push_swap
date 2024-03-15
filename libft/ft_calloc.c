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

// The ft_calloc function is used to dynamically allocate
// memory for an array and initialize it with zero values.
// It provides a convenient way to allocate and initialize memory for an array,
// making it ready for use in storing data.

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*array;

	array = (void *)malloc(nitems * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nitems * size));
	return (array);
}
/*
int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
		scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
		printf("%d ",a[i]);
   }
   free( a );

   return(0);
}
*/
