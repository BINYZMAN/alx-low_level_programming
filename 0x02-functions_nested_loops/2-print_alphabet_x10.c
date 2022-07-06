#include "main.h"
/**
* print_alphabet_x10 - this function prints a to z 10 times
*
*Returns :0
**/
void print_alphabet_x10(void)
{
int j;
int i;
for(i = 0;i < 10; i++)
{
for(j = 97;j < 123; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
