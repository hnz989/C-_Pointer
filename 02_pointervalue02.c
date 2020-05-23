#include<stdio.h>
int main(){
    int x = 10; int y = 99;
    int *px;
    int *py;
    px = &x; py = &y;
    y = *px + 5;
    printf("x1: %d\n", x);
    printf("y1: %d\n", y);
    y = (*px)++;
    printf("x2: %d\n", x);
    printf("y2: %d\n", y);
    *px = ++(*px);
    printf("x3: %d\n", x);
    printf("y3: %d\n", y);
    py = px;
    printf("x4: %d\n", x);
    printf("y4: %d\n", y);
    printf("px: %d\n", *px);
    printf("py: %d\n", *py);
    *px = *px + 1;
    printf("x5: %d\n", x);
    printf("y5: %d\n", y);
    printf("py: %d\n", *py);
    printf("px: %d\n", *px);
    *py = 99;
    printf("x6: %d\n", *px);
    printf("y6: %d\n", *py);
    printf("x7: %d\n", x);
    printf("y7: %d\n", y);

    return 0;
}
