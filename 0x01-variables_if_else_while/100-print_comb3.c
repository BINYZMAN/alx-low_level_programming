#include <stdio.h>
/**
* main -main block
* Return:0
*/
int main(void)
{
for (int i = 0; i <= 9; i++)
{
putchar((i) + '0);
for (int j = 0; j <= 9; j++)
{
if (j > i)
{
putchar((j) + '0');
putchar(', ');
}
}
}
putchar('\n');
return (0);
}
