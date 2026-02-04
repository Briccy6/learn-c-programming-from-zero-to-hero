#include <stdio.h>

int main(void) {
    int n = 50;
    while (n >= 0) {
        printf("%d\n", n);
        n -= 5;
    }
    return 0;
}
