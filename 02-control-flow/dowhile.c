   
   #include <stdio.h>

int main(void) {
    int num = 0;
    do {
        printf("%d\n", num);
        num += 2;  /* increment by 2 to print even numbers */
    } while (num <= 50);
    return 0;
}
