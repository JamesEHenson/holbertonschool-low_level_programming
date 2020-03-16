#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
va_list num_args;

va_start(num_args, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum = sum + va_arg(num_args, int);
}
va_end(num_args);
return (sum);
}
