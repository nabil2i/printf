#include "main.h"

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
		str = "(nil)";
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
	(void)ap;

	_putchar('%');
	return (1);
}
