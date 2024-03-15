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

// The purpose of ft_putchar_fd is to provide a convenient
// way to write a single character to a specified file descriptor.
// It is typically used for low-level I/O operations when you
// want to write individual characters instead of strings.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	int fileDescriptor = 1; // File descriptor for standard output (stdout)
	// Write characters to the file descriptor using ft_putchar_fd
	ft_putchar_fd('H', fileDescriptor);
	ft_putchar_fd('e', fileDescriptor);
	ft_putchar_fd('l', fileDescriptor);
	ft_putchar_fd('l', fileDescriptor);
	ft_putchar_fd('o', fileDescriptor);
	ft_putchar_fd('!', fileDescriptor);
	return (0);
}
*/