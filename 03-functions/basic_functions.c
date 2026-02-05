#include <stdio.h>

/* Function declarations */
int add(int a, int b);
int subtract(int a, int b);

int main(void) {
    int x = 10, y = 5;

    printf("Addition: %d\n", add(x, y));
    printf("Subtraction: %d\n", subtract(x, y));

    return 0;
}

/* Function definitions */
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
