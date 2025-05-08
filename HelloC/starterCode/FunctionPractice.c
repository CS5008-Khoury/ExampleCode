/**
 * Starter Code Function Practice Code Along
 * 
 * This program demonstrates the use of functions in C.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> 


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0; // Return 0 or handle the error as needed
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0; // Return 0 or handle the error as needed
    }
    return a % b;
}


int main() {
    int a = 10;
    int b = 5;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));
    printf("Division: %d\n", divide(a, b));
    printf("Division by zero: %d\n", divide(a, 0)); // Test division by zer

    return 0;
}
