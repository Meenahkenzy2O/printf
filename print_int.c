#include "main.h"

int put_int(int num) {
	int x = num, count = 0;
	if (num > 9)
		count += put_int((int) num / 10);
	count += _putchar(48 + (num % 10));
	return count;
}
int print_int(va_list list)
{
	int num = va_arg(list, int);
	return (put_int(num));
}
