#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringArgs;
	char *strArg;

	va_start(stringArgs, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(stringArgs, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	va_end(stringArgs);
	printf("\n");
}
