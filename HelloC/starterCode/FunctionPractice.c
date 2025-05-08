/**
 * Starter Code Function Practice Code Along
 * 
 * This program demonstrates the use of functions in C.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> 

double add(int64_t a, int64_t b) {
    return a + b;
}

double subtract(int64_t a, int64_t b) {
    return a - b;
}

double mulitply(int64_t a, int64_t b) {
    return a * b;
}

double divide(int64_t a, int64_t b) {
    return a / b;
}

double modulus(int64_t a, int64_t b) {
    return a % b;
}

int main() {
    long a = 100;
    short b =6;

    printf("Addition: %.2f\n", add(a, b));
    printf("Subtraction: %.2f\n", subtract(a, b));
    printf("Multiplication: %.2f\n", mulitply(a, b));
    printf("Division: %.2f\n", divide(a, b));
    printf("Modulus: %.2f\n", modulus(a, b));

    return 0;
}
