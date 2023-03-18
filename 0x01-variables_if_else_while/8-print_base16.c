#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Assigns a random number to variable n
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		ch = i + '0';
		putchar(ch);
	}
	for (i = 0; i < 6; i++)
	{
		ch = i + 'a';
		putchar(ch);
}
putchar('\n');
return (0);
}
