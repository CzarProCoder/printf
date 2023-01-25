#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

int _printf(const char *format, ...);

typedef struct flags_printf
{
	char *c;
	int (*f)(va_list);
}flags_p;

#endif /* endif */
