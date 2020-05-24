#include <stdio.h>
int main(void){
   int m = 10, n, o;
   int *z = &m;
   printf("z store address = %#x\n", z);
   printf("z = %d\n", *z);
   printf("m address = %#x\n", &m);
   printf("m = %d\n", m);
   printf("n address = %#x\n", &n);
   printf("o address = %#x\n", &o);
   return 0;
}
