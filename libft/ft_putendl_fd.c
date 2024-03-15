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

// The purpose of ft_putendl_fd is to provide a convenient way to write
// a string followed by a newline character to a specified file descriptor.
// It is typically used for low-level I/O operations
// when you want to write a complete line of text.

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*message;

	int fileDescriptor = 1; // File descriptor for standard output (stdout)
	message = "Hello, world!";
	ft_putendl_fd(message, fileDescriptor);
	return (0);
}
*/