#include <stdio.h>
/*
* main -main block
* Return:0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
if (ch == 'z')
{
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
}
}
return (0);
}
