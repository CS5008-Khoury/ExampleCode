/**
 * Solution code for Loop Practice Code Along
 * 
 * This program demonstrates the use of loops in C.
 * 
 * @author Albert Lionelle
 * @date 2025-04-03
 */

#include <stdio.h>
#include <stdlib.h>


void forLoopPractice(int start, int end) {
    // for Loop
    for (int i = start; i < end; i++) {
        printf("For Loop %d\n", i);
    }

    // reverse Loop
    for (int i = end - 1; i >= start; i--) {
        printf("For Loop Reverse %d\n", i);
    }

    for (int i = start; i < end; i+=2) {
        printf("For Loop with step: %d\n", i);
    }
}


int main() {
    forLoopPractice(0, 10);
    return 0;
}
