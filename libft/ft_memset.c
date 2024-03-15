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

// ft_memset sets each byte in a memory block pointed to by ptr
// to the specified value for num iterations
// and returns the updated pointer.

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ptr;
	while (i < num)
	{
		str[i] = value;
		i++;
	}
	return (ptr);
}
/*
int main (void)
{
	char buffer[10];

	ft_memset(buffer, 'A', sizeof(buffer));
	for (unsigned long i = 0; i < sizeof(buffer); i++)
	{
		printf("%c ", buffer[i]);
	}
 }
 */
