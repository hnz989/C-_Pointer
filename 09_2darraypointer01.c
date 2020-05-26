#include<stdio.h>
int main(){
    int a[3][4] = { {0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int(*p)[4] = a;
    for(int i=0;i<4;i++)
    {
        printf("%d\n", *((*p+i)));
    }
    printf("%d\n", sizeof(*(p+1)));
    return 0;
}
