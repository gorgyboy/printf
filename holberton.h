#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/**
 * struct format_characters - Struct for formatting specifiers
 * @id: Format identifier
 * @f: Format print fuction
 */
typedef struct format_characters
{
	char *id;
	int (*f)(va_list);
} fmt_chars;

int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int print_binary(va_list);
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* HOLBERTON_H */
