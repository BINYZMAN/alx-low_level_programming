#include "main.h"
/**
* print_alphabet_x10 - this function prints a to z 10 times in different lines
*
* Returns : 0
*/
void printalphabet_x10(void)
{
int i=0;
int j;
while(i < 10)
{
j=97;
while(j < 123)
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
}
}
