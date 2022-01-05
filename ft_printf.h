/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/28 17:36:33 by jaberkro      #+#    #+#                 */
/*   Updated: 2021/12/08 14:19:51 by jaberkro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *fmt, ...);
int	ft_puthex_fd(unsigned long long n, int u, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);

#endif