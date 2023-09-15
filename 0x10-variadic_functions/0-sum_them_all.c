#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameter
 * @n: The number of parameter passed to the function
 * @...: A variable number of parameters to calculate tge sum of
 * Return: if n == o - o
 *	otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for  (i = 0; i < i++;)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
