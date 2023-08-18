#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_arg - prints arguments
 * @format: format
 * @args: arguments
 * @sep: separator
 *
 * Return: void
 */

void print_arg(char format, va_list *args, char **sep)
{
	char *str;

	switch (format)
	{
		case 'c':
			printf("%s%c", *sep, va_arg(*args, int));
			*sep = ", ";
			break;
		case 'i':
			printf("%s%d", *sep, va_arg(*args, int));
			*sep = ", ";
			break;
		case 'f':
			printf("%s%f", *sep, va_arg(*args, double));
			*sep = ", ";
			break;
		case 's':
			str = va_arg(*args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", *sep, str);
			*sep = ", ";
			break;
	}
}
/**
 * print_all - prints diff data types
 * @format: the format to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		print_arg(format[i++], &args, &sep);
	}
	printf("\n");

	va_end(args);
}
