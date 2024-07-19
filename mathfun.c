#include "mathfun.h"
#include <stdbool.h> // For boolean data type

bool is_divisible(int num, int divisor) {
    return num % divisor == 0;
}

int check_prime(int data) {
    if (data <= 1) return 0; // 1 or less are not prime
    for (int i = 2; i * i <= data; i++) {
        if (is_divisible(data, i)) return 0; // Divisible by a number > 1, not prime
    }
    return 1; // Prime number
}

//check for  a particluar digit(eg:3)
int test_digit(int data, int digit) {
    while (data > 0) {
        if (data % 10 == digit) return 1; // Digit found
        data /= 10;
    }
    return 0; // Digit not found
}

//verifying digits are ascending order
int test_ascend(int data) {
    int prev_digit = data % 10;
    data /= 10;
    while (data > 0) {
        int curr_digit = data % 10;
        if (curr_digit > prev_digit) return 0; // Digits not ascending
        prev_digit = curr_digit;
        data /= 10;
    }
    return 1; // Digits are ascending
}

//verifying digits are descending order
int test_descend(int data) {
    int prev_digit = data % 10;
    data /= 10;
    while (data > 0) {
        int curr_digit = data % 10;
        if (curr_digit < prev_digit) return 0; // Digits not descending
        prev_digit = curr_digit;
        data /= 10;
    }
    return 1; // Digits are descending
}