#include <stdio.h>
/**
* main -main block
* Return:0
*/
int main(void)
{
int ch;
ch = 0;
for (int i = 0; i <= 9; i++)
{
putchar((ch)+'0);
for (int j = 0; j <= 9; j++)
{
if (j>i)
{
putchar((j)+'0');
putchar(', ');
}
}
ch++;
}
putchar('\n');
return (0);
}
