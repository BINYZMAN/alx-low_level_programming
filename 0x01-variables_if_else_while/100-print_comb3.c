#include <stdio.h>
/**
* main -main block
* Return:0
*/
int main(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
putchar((i) + '0');
for (j = 0; j <= 9; j++)
{
if (j > i)
{
putchar((j) + '0');
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
