#include "main.h"
int _printf(const char *format, ...) {
	va_list ptr;
	int i = 0, buf, count = 0, j = 0;
	va_start(ptr, 1000);
	/* my name is %  */
	while(format[i] != '\0') {
		j = 0;
		if (format[i] != '%')
			count += _putchar(format[i]);	
		else {
			while(handlers[i].c != '\0') {
				if (format[i + 1] == handlers[i].c) {
					count += handlers[i].fun_ptr(ptr);
				}
			}
			i++;

			/*
			if (format[i + 1] == 'd') {
				buf = va_arg(ptr, int);
				count += print_int(buf);
				i++;
			}
			*/
		}
		i++;
	}
	return (count);
}
