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
putchar(31);
ch++;
}
putchar('\n');
return (0);
}
