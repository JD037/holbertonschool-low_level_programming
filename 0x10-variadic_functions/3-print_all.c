#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";

	/* list of data types */
	dt_t data_type[] = {
		{'c', "%c"},
		{'i', "%d"},
		{'f', "%f"},
		{'s', "%s"}
	};

	va_start(args, format);

	/* while loop to go through format string */
	while (format && format[i])
	{
		/* initialize variable */
		j = 0;
		/* inner while loop to compare data types */
		while (j < 4)
		{
			if (format[i] == data_type[j].type)
			{
				/* print separator */
				printf("%s", separator);
				/* switch statement to print correct data type */
				switch (format[i])
				{
					case 'c':
						printf(data_type[j].f, va_arg(args, int));
						break;
					case 'i':
						printf(data_type[j].f, va_arg(args, int));
						break;
					case 'f':
						printf(data_type[j].f, va_arg(args, double));
						break;
					case 's':
						printf("%s", va_arg(args, char *));
						if (!va_arg(args, char *))
							printf("(nil)");
						break;
				}
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
