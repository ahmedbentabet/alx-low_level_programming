#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format.
 * @format: A list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int i;
	char *s;
	char *sep;
	va_list args;

	i = 0;
	sep = "";
	va_start(args, format);

	if (format)
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}

	printf("\n");
	va_end(args);
}

