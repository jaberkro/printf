#include "../ft_printf.h"

int main()
{
	printf("whatever %s\n", " hello");
	ft_printf("whatever %s\n", " hello");
	printf("%s %s\n", " hello", "   world");
	ft_printf("%s %s\n", " hello", "   world");
	printf("%s %s %d \n", " hello", "   world", 116);
	ft_printf("%s %s %d \n", " hello", "   world", 116);
	printf("%c %c\n", " ", "c");
	ft_printf("%c %c\n", " ", "c");
	printf("%i %d\n", 2147483647, 2147483647);
	ft_printf("%i %d\n", 2147483647, 2147483647);
	int a = 15;
	int *b;
	b = a;
	printf("address a: %p, address b: %p, b: %p \n", &a, &b, b);
	ft_printf("address a: %p, address b: %p, b: %p \n", &a, &b, b);
	printf("%x, %X\n", 42, 42);
	ft_printf("%x, %X\n", 42, 42);
	printf("NULL %s NULL \n", NULL);
	ft_printf("NULL %s NULL \n", NULL);
	printf("%s\n", "");
	ft_printf("%s\n", "");
	printf("%s\n", "\thi\thi");
	ft_printf("%s\n", "\thi\thi");
}