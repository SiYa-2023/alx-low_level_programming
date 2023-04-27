#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    unsigned long int a = 0, b = 1, c;

    for (i = 1; i <= 98; i++)
    {
        c = a + b;
        printf("%lu", c);

        if (i != 98)
            printf(", ");

        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}
