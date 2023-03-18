#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point.
*
* Return: Always 0.
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int tens1 = i / 10;
			int ones1 = i % 10;
			int tens2 = j / 10;
			int ones2 = j % 10;

			putchar(tens1 + '0');
			putchar(ones1 + '0');
			putchar(' ');
			putchar(tens2 + '0');
			putchar(ones2 + '0');
			putchar(',');
			if (i != 99 || j != 99)
			{
				putchar(' ');
			}
		}
	}

	return (0);
}
