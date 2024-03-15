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

// The ft_itoa function converts an integer into a string representation.
// It handles both positive and negative numbers.
// The function dynamically allocates memory for the
// resulting string and returns a pointer to it.
// If the memory allocation fails, it returns NULL.
// The resulting string represents the integer,
// with a minus sign ('-') for negative numbers.

static char	*convert_number_to_string(char *str, unsigned int number,
		long int len)
{
	while (number > 0)
	{
		str[len--] = '0' + (number % 10);
		number /= 10;
	}
	return (str);
}

static long int	get_string_length(int n)
{
	long int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		len;
	unsigned int	number;
	int				sign;

	(void)sign;
	sign = 1;
	len = get_string_length(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		sign = -1;
		number = (unsigned int)(n * -1);
		str[0] = '-';
	}
	else
		number = (unsigned int)n;
	str = convert_number_to_string(str, number, len);
	return (str);
}
/*
int	main(void)
{
	int		number;
	char	*str;

	number = -5210;
	str = ft_itoa(number);
	if (str != NULL)
	{
		printf("Integer: %d\n", number);
		printf("String: %s\n", str);
		free(str);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
*/