#include<stdio.h>
int main(){
    char ch[10]={'a','b','c','d','e','f','g','h','i','\0'};
    printf("%s",ch);
    printf("\n");
    char string[50];
    gets(string);
    // printf("%s",string);
    puts(string);

    return 0;
}