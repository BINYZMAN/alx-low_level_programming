#include <stdio.h>
/**
* main -main block
* Return:0
*/
int main(void)
{
int ch;
ch = 0;
while (ch < 10)
{
putchar((ch) + '0');
putchar(44);
if (ch != 9)
putchar(32);
ch++;
}
putchar('\n');
return (0);
}
