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

}
print_t;

/*Functions Declarations*/
int _putchar(char);
int _printf(const char *format, ...);
int printer(const char *format, print_t func_list[], va_list args);
int print_char(va_list);
int print_int(va_list);
int print_num(va_list);
int print_binary(va_list);
int print_string(va_list);
int print_percent_symbol(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);

/*Helper functions*/

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

#endif /* MAIN_H */
