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

// The ft_putnbr_fd function provides a way to
// write an integer to a specified file descriptor,
// taking care of handling negative numbers and
// recursively writing digits in the correct order.

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd((number % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd(number + '0', fd);
	}
}
/*
int	main(void)
{
	int	number;

	int fileDescriptor = 1; // File descriptor for standard output (stdout)
	number = -12345;
	// Write the number to the file descriptor using ft_putnbr_fd
	ft_putnbr_fd(number, fileDescriptor);
	return (0);
}
*/