/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mytest.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaberkro <jaberkro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/28 17:52:30 by jaberkro      #+#    #+#                 */
/*   Updated: 2022/01/04 18:02:44 by Jorien        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"
#include <limits.h>

//TRY ONE BLOCK AT THE SAME TIME

int main()
{
	// //char
	// printf("%c\n", 'H');
	// ft_printf("%c\n", 'H');
	// printf("%c\n", 'e');
	// ft_printf("%c\n", 'e');
	// printf("%c\n", '-');
	// ft_printf("%c\n", '-');
	// printf("%c\n", '0');
	// ft_printf("%c\n", '0');
	// printf("%c\n", '%');
	// ft_printf("%c\n", '%');
	// printf("%% hello %%\n");
	// ft_printf("%% hello %%\n");
	// printf("%c\n", '\n');
	// ft_printf("%c\n", '\n');

	// //string
	// printf("%s\n", "Hello");
	// ft_printf("%s\n", "Hello");
	// printf("%s\n", "#$*ˆ&");
	// ft_printf("%s\n", "#$*ˆ&");
	// printf("%s\n", "     .");
	// ft_printf("%s\n", "     .");
	// printf("%s\n", "\th\th");
	// ft_printf("%s\n", "\th\th");
	// int a = printf("%s\n", "");
	// int b = ft_printf("%s\n", "");
	// int c = printf(" NULL %s NULL\n", NULL);
	// int d = ft_printf(" NULL %s NULL\n", NULL);
	// printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);


	// //int
	// printf("%i\n", printf("%i\n", 0));
	// ft_printf("%i\n", ft_printf("%i\n", 0));
	// printf("%i\n", -1);
	// ft_printf("%i\n", -1);
	// printf("%i\n", 1);
	// ft_printf("%i\n", 1);
	// printf("%i\n", -2147483648);
	// ft_printf("%i\n", -2147483648);
	// printf("%i\n", 2147483647);
	// ft_printf("%i\n", 2147483647);
	// printf("%i\n", -2147483649);
	// ft_printf("%i\n", -2147483649);
	// printf("%i\n", 2147483648);
	// ft_printf("%i\n\n", 2147483648);

	// //d (ouble?)
	// printf("%d\n", 0);
	// ft_printf("%d\n", 0);
	// printf("%d\n", -1);
	// ft_printf("%d\n", -1);
	// printf("%d\n", 1);
	// ft_printf("%d\n", 1);
	// printf("%d\n", -2147483648);
	// ft_printf("%d\n", -2147483648);
	// printf("%d\n", 2147483647);
	// ft_printf("%d\n", 2147483647);
	// printf("%d\n", -2147483649);
	// ft_printf("%d\n", -2147483649);
	// printf("%d\n", 2147483648);
	// ft_printf("%d\n\n", 2147483648);

	// //unsigned int
	// printf("%u\n", 0);
	// ft_printf("%u\n", 0);
	// printf("%u\n", -1);
	// ft_printf("%u\n", -1);
	// printf("%u\n", 1);
	// ft_printf("%u\n", 1);
	// printf("%u\n", 2147483648);
	// ft_printf("%u\n", 2147483648);
	// printf("%u\n", 2147483647);
	// ft_printf("%u\n", 2147483647);
	// printf("%u\n", 4294967295);
	// ft_printf("%u\n", 4294967295);
	// printf("%u\n", 4294967296);
	// ft_printf("%u\n", 4294967296);


	//hex lowercase
	// printf("%x\n", 1);
	// ft_printf("%x\n", 1);
	// printf("%x\n", 1000);
	// ft_printf("%x\n", 1000);
	// printf("%x\n", 1000000);
	// ft_printf("%x\n", 1000000);
	// printf("%x\n", 2147483647);
	// ft_printf("%x\n", 2147483647);
	// printf("%x\n", 0);
	// ft_printf("%x\n", 0);
	// printf("%x\n", 'a');
	// ft_printf("%x\n", 'a');
	// printf("%x\n", -1000);
	// ft_printf("%x\n", -1000);
	// printf("%x\n", -1000000);
	// ft_printf("%x\n", -1000000);
	// printf("%x\n", -2147483647);
	// ft_printf("%x\n", -2147483647);
	// printf("%x\n", -2147483648);
	// ft_printf("%x\n", -2147483648);
	

	// //hex uppercase
	// printf("%X\n", 1);
	// ft_printf("%X\n", 1);
	// printf("%X\n", 1000);
	// ft_printf("%X\n", 1000);
	// printf("%X\n", 1000000);
	// ft_printf("%X\n", 1000000);
	// printf("%X\n", 2147483647);
	// ft_printf("%X\n", 2147483647);
	// printf("%X\n", 0);
	// ft_printf("%X\n", 0);
	// printf("%X\n", 'a');
	// ft_printf("%X\n", 'a');
	// printf("%X\n", -1000);
	// ft_printf("%X\n", -1000);
	// printf("%X\n", -1000000);
	// ft_printf("%X\n", -1000000);
	// printf("%X\n", -2147483647);
	// ft_printf("%X\n", -2147483647);
	// printf("%X\n", -2147483648);
	// ft_printf("%X\n", -2147483648);
	// printf("%X\n", 4294967234);
	// ft_printf("%X\n", 4294967234);
	
	//pointer
	// int a = 40;
	// int *b;
	// b = &a;
	// unsigned long long d = 2147483638124908;
	// unsigned long long *e;
	// e = &d;
	// char	*c = "hello";
	// char *d = c;
	// printf("%p\n", &a);
	// ft_printf("%p\n", &a);
	// printf("%p\n", &b);
	// ft_printf("%p\n", &b);
	// printf("%p\n", &d);
	// ft_printf("%p\n", &d);
	// printf("%p\n", &e);
	// ft_printf("%p\n", &e);
	// printf("%p\n", -1);
	// ft_printf("%p\n", -1);
	// printf("%p\n", 1);
	// ft_printf("%p\n", 1);
	// printf("%p\n", 15);
	// ft_printf("%p\n", 15);
	// printf("%p\n", 16);
	// ft_printf("%p\n", 16);
	// printf("%p\n", __LONG_LONG_MAX__);
	// ft_printf("%p\n", __LONG_LONG_MAX__);
}
