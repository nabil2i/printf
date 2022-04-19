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
int _putchar(char c);
int _printf(const char *format, ...);
int printer(const char *format, print_t func_list[], va_list args);
/* Task 0 main functions */
int print_char(va_list);
int print_binary(va_list);
int print_string(va_list);
int print_percent_symbol(va_list);
/* Task 1 main functions */
int print_integer(va_list);
int print_number(va_list);
/* Task 3 main functions */
int print_binary(va_list);
/*Task 4 main functions */
int unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_heX(va_list);

int print_unsgined_number(unsigned int);

/* Task 14 main functions */
int print_reversed(va_list arg);
/* Task 15 main functions */
int rot13(va_list);


/*Helper functions*/

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif /* MAIN_H */
