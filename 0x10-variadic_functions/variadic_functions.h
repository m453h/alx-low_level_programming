#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
/**
 * struct p - custom data type for selecting appropriate
 * print function for a given format.
 * @p: the format to print.
 * @f: the function associated with @p.
 */
typedef struct p
{
	void (*f)(va_list arg);
	char p;

} p_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTION_H */
