#include<stdio.h>
int main(){
    char *str = "I love you";
    char **point = &str;
    printf("%s\n", str);
    printf("%d\n", &str);
    printf("%d\n", &(*point));
    printf("%d\n", &(**point));
    printf("%s\n", *point);
    int num = 99;
    int *p0 = &num;
    printf("%d\n", num);
    printf("%d\n", p0);
    printf("%d\n", &p0);
    printf("%d\n", &(*p0));
    printf("%d\n", *p0);


    return 0;
}
