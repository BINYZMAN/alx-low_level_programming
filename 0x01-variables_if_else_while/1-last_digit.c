#include <stdio.h>
#include <time.h>
/* 
* main -main block
* Return :0
*/
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit > 5)
printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
else if (lastdigit == 0)
printf("Last digit of %d is %d and is 0", n, lastdigit);
else if (lastdigit < 6 && lastdigit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
return (0);
}