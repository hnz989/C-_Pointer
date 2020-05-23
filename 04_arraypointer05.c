#include<stdio.h>

int main(){
    char *str = "Hello World!";
    int len = strlen(str), i;
    for(i=0; i<len; i++){
        printf("%c", *(str+i));
    }
    printf("\n");
    str = "I love C!";
    for(i=0; i<len; i++){
        printf("%c", *(str+i));
    }
    printf("\n");
    str[3] = 'P';
    printf("%c", str[3]);

    return 0;
}
