#include <stdio.h>

int globalVar = 100;  // Global variable

void showScope(void);

int main(void) {
    int localVar = 50;  // Local variable

    printf("Inside main:\n");
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);

    showScope();

    return 0;
}

void showScope(void) {
    int localVar = 20;  // Different local variable

    printf("\nInside showScope function:\n");
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
}
