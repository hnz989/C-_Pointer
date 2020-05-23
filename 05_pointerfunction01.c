#include<stdio.h>

int max(int *intArr, int len);

int main(){
    int nums[6], i;
    int len = sizeof(nums)/sizeof(int);
    printf("len = %d\n", len);

    for(i=0; i<len; i++){
        scanf("%d", nums+i);
    }

    printf("Max Value is %d.\n", max(nums, len));

    return 0;
}

int max(int *intArr, int len){
    int i, maxValue = intArr[0];
    for(i=1; i<len; i++){
        if(maxValue < intArr[i]){
            maxValue = intArr[i];
	}
    }
    return maxValue;
}
