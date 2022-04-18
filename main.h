#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - structer for formats and print functions
 * @s: operator
 * @f: pointer to the print function associated to the operator
 */
typedef struct print
{
	char *s;
	int (*f)(va_list);

} print_t;

/*Functions Declarations*/
int _putchar(char);
int _printf(const char *format, ...);
int printer(const char *format, print_t func_list[], va_list args);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent_symbol(va_list ap);

#endif /* MAIN_H */
