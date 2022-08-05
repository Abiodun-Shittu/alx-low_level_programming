#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list list;

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(list);
}
