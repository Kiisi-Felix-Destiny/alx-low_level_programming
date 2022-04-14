#include "variadic_functions.h"

/**
 * sum_them_all - sum all the arguments
 * @n: first paramter of the va_list
 *
 * Return: sum of its parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;

	unsigned int i;

	int sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(va_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
