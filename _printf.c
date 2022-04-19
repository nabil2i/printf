#include "main.h"

/**
 * _printf - write to the standard output a formated string
 * @format: string to be printed containing 0 or more directives
 * Return: the total number of printed characters
 */
int _printf(const char *format, ...)
{
	int count_chars;
	print_t func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent_symbol},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", print_rot13},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	count_chars = printer(format, func_list, args);
	va_end(args);
	return (count_chars);
}

