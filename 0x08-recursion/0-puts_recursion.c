#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - prints a string given using _putchar
 * @s: string given
 *
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
