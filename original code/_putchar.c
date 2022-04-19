#include <unistd.h>
/**
 * _putchar - prints a character given as arg
 * @c: character to print
 * Return: 1 (Success)
 *		Negative number (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
