#include "main.h"

int print_int(int num) {
	int x = num, count = 0;
	if (num > 9)
		count += print_int((int) num / 10);
	count += _putchar(48 + (num % 10));
	return count;
}
