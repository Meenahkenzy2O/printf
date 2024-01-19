#ifndef PRINTF_H
#define PRINTF_H
#include <stddef.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list list);
typedef struct handler_s {
	char c;
	int (*fun_ptr)(va_list);
} handler_t;
handler_t handlers[] = {
	{'d', print_int},
	{'\0', NULL}
};

#endif
