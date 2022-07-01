#include <stdio.h>
/**
* main -main block
* Return:0
*/
int main(void)
{
int num;
char ch;
for (num = 0; num <= 9; num++)
{
putchar((num)+'0');
if (num  == 9 )
{
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
brack;
}
putchar('\n');
return (0);
}
