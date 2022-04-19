#include "main.h"


/* TASK 0 FUNCTIONS */

/**
 * print_char - prints a character
 * @ap: arguments of type va_list
 * Return: the number of characters printed
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_string - prints a string fo characters
 * @ap: arguments of type va_list
 * Return: the number of characters printed
 */
int print_string(va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent_symbol - prints the percent (%) character
 * @ap: arguments of type va_list
 * Return: the number of characters printed
 */
int print_percent_symbol(va_list ap)
{
	(void) ap;

	_putchar('%');
	return (1);
}

/* TASK 1 FUNCTIONS */
/**
 * print_integer - prints an integer
 * @ap: arguments of type va_list
 * Return: the number of characters printed
 */
int print_integer(va_list ap)
{
	int num_length;

	num_length = print_number(ap);
	return (num_length);
}

/**
 * unsigned_integer - prints Unsigned integers
 * @ap: arguments of type va_list
 * Return: the number of characters printed
 */
int unsigned_integer(va_list ap)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
