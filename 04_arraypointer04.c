#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "http://c.biancheng.net";
    char *pstr = str;
    int len = strlen(str), i;
    //use *(pstr+i)
    for(i=0; i<len; i++){
        printf("%c", *(pstr+i));
    }
    printf("\n");
    //use pstr[i]
    for(i=0; i<len; i++){
        printf("%c", pstr[i]);
     }
     printf("\n");
     //use *(str+i)
     for(i=0; i<len; i++){
         printf("%c", *(str+i));
     } 
     printf("\n");
     return 0;
}
