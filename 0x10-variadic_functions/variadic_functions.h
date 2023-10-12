#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct format_specifier - Struct to match format specifiers with functions
 * @specifier: The format specifier
 * @f: The corresponding function to handle the specifier
 */
typedef struct format_specifier
{
	char *specifier;
	void (*f)(va_list);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif 
