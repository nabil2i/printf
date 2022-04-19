#include "main.h"

/**
 * printer - printf the formatted string character by character using
 * the optional arguments
 * @format: string to print containing 0 or more directives
 * @func_list: array of the print functions associated with an operator
 * @args: optional arguments passed to the main program
 * Return: the total of the printed characters
 */
int printer(const char *format, print_t func_list[], va_list args)
{
	int i, j, check_print, count_chars;

	count_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_list[j].s != NULL; j++)
			{
				if (format[i + 1] == func_list[j].s[0])
				{
					check_print = func_list[j].f(args);
					if (check_print == -1)
						return (-1);
					count_chars = count_chars + check_print;
					break;
				}
			}
			if (func_list[j].s == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count_chars = count_chars + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count_chars++;
		}
	}
	return (count_chars);
}
