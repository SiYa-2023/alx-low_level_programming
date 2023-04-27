#include <stdio.h>

int main(void) {
    int prev = 1;
    int curr = 2;
    int sum = 2; // start with the second term
    while (curr <= 4000000) {
        int next = prev + curr;
        if (next % 2 == 0) { // check if next term is even
            sum += next;
        }
        prev = curr;
        curr = next;
    }
    printf("%d\n", sum);
    return 0;
}
