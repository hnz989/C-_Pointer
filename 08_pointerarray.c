#include<stdio.h>
int main(){
    int a = 16, b = 932, c = 100;

    int *arr[] = {&a, &b, &c};

    int **parr = arr;

    printf("%d, %d, %d\n", *arr[0], *arr[1], *arr[2]);
    printf("%d, %d, %d\n", **(parr+0), **(parr+1), **(parr+2));
    return 0;
}
