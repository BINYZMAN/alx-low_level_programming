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
int a = 0;
for (k = 0; k <= 9; k++)
{
for (l = 0; l <= 9; l++)
{
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (a == 0)
break;
if (k == 0 && l == 1 && i == 0 && j == 0)
break;
putchar((k) + '0');
putchar((l) + '0');
putchar(32);
putchar((i) + '0');
putchar((j) + '0');
putchar(44);
putchar(32);
}
a++;
}
}
}
return (0);
}
