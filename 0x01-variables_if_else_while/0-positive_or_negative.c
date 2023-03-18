#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This program will assign a random number stored in the variable neach time it is executed.
and it is positive or negative,and gives us the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
        }

        return (0);
}

