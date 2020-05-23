#include<stdio.h>
//#include <string.h>
int main(){
    int a = 10, *pa = &a, *paa = &a;
    double b = 99.9, *pb = &b;
    char c = 's', *pc = &c;

    printf("&a=%#x, &b=%#x, &c=%#x\n", &a, &b, &c);
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    printf("a=%d, b=%f, c=%c\n", a, b, c);
    printf("pa=%d, pb=%f, pc=%c\n\n", *pa, *pb, *pc);

    pa++;  pb++;  pc++;

    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    printf("a=%d, b=%f, c=%c\n", a, b, c);
    printf("pa=%d, pb=%f, pc=%c\n", *pa, *pb, *pc);

    pa -= 1; pb -= 1; pc -= 1;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    printf("a=%d, b=%f, c=%c\n", a, b, c);
    printf("pa=%d, paa=%d, pb=%f, pc=%c\n\n", *pa, *paa, *pb, *pc);

    printf("%c\n",'c');
    printf("%s\n","begin");

    if(pa == paa){
        printf("\n%d\n", *paa);
    }else{
        printf("%d\n", *pa);
    }
    return 0;
}
