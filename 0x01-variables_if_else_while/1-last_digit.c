#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
{
	printf("Last digit of %d is %d and is ",n, abs(n % 1));
if (abs(n % 10) > 5)
	printf("greater than 5\n");
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
	printf("Last digit of %d and ids less than 6 and not 0\n",
			n, n % 10);
}
else
{
	printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
}
return (0);
