


#include<stdio.h>

int *func(int *n){

    *n = 100;
    return n;
}

int main(){
    int n;
    int *p = func(&n);
    //n = *p;
    printf("value = %d\n", *p);
    return 0;
}

