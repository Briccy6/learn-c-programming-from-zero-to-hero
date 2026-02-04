#include <stdio.h>

int main(void) {
    int num;
    int i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\nMultiplication table of %d:\n\n", num);
    
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    
    return 0;
}
