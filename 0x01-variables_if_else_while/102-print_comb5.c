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
for (i = k; i <= 9; i++)
{
for (j = l; j <= 9; j++)
{
putchar((k) + '0');
putchar((l) + '0');
putchar(32);
putchar((i) + '0');
putchar((j) + '0');
if (k == 9 && l == 8 && i == 9 && l == 9)
{
}
else
{
putchar(44);
putchar(32);
}
}

}
}
}
return (0);
}
