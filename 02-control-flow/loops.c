#include <stdio.h>

int main(void) {
    int i, n;

    // For loop
    printf("Enter a number for multiplication table: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // While loop
    int count = 5;
    printf("\nCountdown using while loop:\n");
    while (count > 0) {
        printf("%d\n", count);
        count--;
    }

    // Do-while loop
    int num;
    printf("\nEnter a number (0 to exit): ");
    do {
        scanf("%d", &num);
        printf("You entered: %d\n", num);
    } while (num != 0);

    return 0;
}
