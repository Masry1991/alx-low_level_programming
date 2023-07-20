#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: numbe of parameters
 * @...:variable number of parameters
 * Return: if n == 0 - 0.
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
va_list ptr;
va_start(ptr, n);
for (int i = 0 ; i < n ; i++)
sum += va_arg(ptr, int);
va_end(ptr);
return (sum);
}
