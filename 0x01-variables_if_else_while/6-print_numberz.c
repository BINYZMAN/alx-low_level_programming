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
ch++;
}
putchar('\n');
return (0);
}
