#include <stdio.h>
int main(void) {
    int a;
    for(a=100; a>=0; a-=10) {
      if(a==50){
        continue;
      }
      printf("%d\n", a);
    } 
    return 0;
}
