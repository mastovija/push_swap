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

// The ft_strncmp function compares the first n characters of two strings,
// str1 and str2.
// It returns an integer value that indicates the result of the comparison

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (((unsigned char)str1[i] - (unsigned char)str2[i]));
		i++;
	}
	return (0);
}
/*
int main (void)
{
	char	*str1;
	char	*str2;

	str1 = "Abcdef";
	str2 = "abcdef";
	printf("%i", ft_strncmp(str1, str2, 4));
}
*/