#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 * @n: int
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list params;

if (n == 0)
return (0);

va_start(params, n);
for (; i < n; i++)
sum += va_arg(params, int);
va_end(params);
return (sum);
}
