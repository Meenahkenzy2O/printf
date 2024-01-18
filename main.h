#ifndef PRINTF_H
#define PRINTF_H
#include <stddef.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);

typedef struct handler_s {
	char c;
	int (*fun_ptr)(va_list);
}

#endif
