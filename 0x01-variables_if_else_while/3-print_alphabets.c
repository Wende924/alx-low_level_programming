#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	char c;
		/* Print lowercase alphabet*/
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	/* Print uppercase alphabet*/
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	/* Print new line*/
	putchar('\n');
	return (0);
}
