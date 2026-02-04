#include <stdio.h>

int main(void) {
    int integerNumber = 10;
    float floatNumber = 3.14f;
    double doubleNumber = 3.1415926535;
    char character = 'C';

    printf("Integer value: %d (Size: %lu bytes)\n", integerNumber, sizeof(int));
    printf("Float value: %.2f (Size: %lu bytes)\n", floatNumber, sizeof(float));
    printf("Double value: %.10f (Size: %lu bytes)\n", doubleNumber, sizeof(double));
    printf("Character value: %c (Size: %lu byte)\n", character, sizeof(char));

    return 0;
}
