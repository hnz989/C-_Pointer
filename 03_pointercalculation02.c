#include <stdio.h>
int main(){
    int a = 1, b = 2, c = 3;
    int *p = &c;
    int i;
    for(i=0; i<4; i++){
        printf("%d, ", *(p+i) );
    }
    return 0;
}
