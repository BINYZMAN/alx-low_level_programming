#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints numbers from up to 98
*
* @n: start number
*
*/
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 99; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else if (n >= 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
if (n != 111 && n != 98)
printf("\n");
}
