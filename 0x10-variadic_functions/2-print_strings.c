#include "variadic_functions.h"

/**
 * print_strings - prints string passed to ()&separated by @separator
 * @separator: string printed btw strings for separation
 * @n: no of strings passed as argument to function
 * @...: variable no of string to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);

}
