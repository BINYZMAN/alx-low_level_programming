#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - prints a string given using _putchar
 * @s: string given
 *
 */

void _puts_recursion(char *s)
{
	int _putchar(char c)
{
    return (write(1, &c, 1));
}
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
