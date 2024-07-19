#include <stdio.h>
#include "mathfun.h" // Include the header file

int main() {
    int lower = 100, upper = 1000;
    printf("Output: ");
    for (int num = lower; num <= upper; num++) {
        if (check_prime(num) && test_digit(num, 3) && (test_ascend(num) || test_descend(num))) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}