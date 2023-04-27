#include <stdio.h>

int main(void)
{
    int i;
    unsigned long int fib1 = 1, fib2 = 2, next;

    printf("%lu, %lu", fib1, fib2);

    for (i = 3; i <= 50; i++)
    {
        next = fib1 + fib2;
        printf(", %lu", next);
        fib1 = fib2;
        fib2 = next;
    }

    printf("\n");

    return 0;
}
