#include<stdio.h>

int main(){
    int arr[] = {99, 15, 100, 888, 252};
    int len = sizeof(arr)/sizeof(int); // length of array;
    int i;
    printf("%d\n",len);
    for(i=0;i<len;i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
    return 0;
}
