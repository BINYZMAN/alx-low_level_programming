#include "main.h"
/**
 *
 *print_alphabet - Prints alphabets from a to z in small letters
 *
 * Return: 0
 *
 **/
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

