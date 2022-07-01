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
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j > i)
{
for (k = 0; k <= 9; k++)
{
if (k > j )
{
putchar((i) + '0');
putchar((j) + '0');
putchar((k) + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(44);
putchar(32);
}
}
}
}
}
}
putchar('\n');
return (0);
}
