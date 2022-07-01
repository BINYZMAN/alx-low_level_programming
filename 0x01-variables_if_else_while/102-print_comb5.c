#include <stdio.h>
/**
* main -main block
* Return:0
*/
int main(void)
{
int i;
int j;
int k;
int l;
for (k = 0; k <= 9; k++)
{
for (l = 0; l <= 9; l++)
{
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (k != i || j != l)
{
putchar((k) + '0');
putchar((l) + '0');
putchar(32);
if (k < j)
{
putchar((i) + '0');
putchar((j) + '0');
putchar(44);
putchar(32);
}
}
}
}
}
}
return (0);
}
