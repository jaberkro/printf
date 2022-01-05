/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puthex_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/28 17:55:51 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/12/09 15:13:36 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long long n, int u, int fd)
{
	int	out;

	out = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return (1);
	}
	if (n / 16 != 0)
		out += ft_puthex_fd(n / 16, u, fd);
	n = n % 16;
	if (n <= 9)
		n += 48;
	else
	{
		if (u == 0)
			n += 87;
		else
			n += 55;
	}
	out += write(fd, &n, 1);
	return (out);
}
