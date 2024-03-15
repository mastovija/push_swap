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

// The purpose of ft_putstr_fd is to provide a convenient way
// to write a string to a specified file descriptor.
// It is typically used for low-level I/O operations when you want
// to write a sequence of characters instead of a single character.

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int	main(void)
{
	char	*message;

	int fileDescriptor = 1; // File descriptor for standard output (stdout)
	message = "Hello, world!";
	// Write the message to the file descriptor using ft_putstr_fd
	ft_putstr_fd(message, fileDescriptor);
	return (0);
}
*/