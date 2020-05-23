#include<stdio.h>

int *func(){
    int n = 100;
    return &n;
}

int main(){
    int *p = func(), n;
    printf("c.biancheng.net\n");
    n = *p;
    printf("value = %d\n", n);
    return 0;
}
