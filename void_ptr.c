#include<stdio.h>
int main(){
    int a=10;
    float b=12.3214;
    void *ptr;
    ptr=&a;
    printf("%d",*((int*)ptr));
    return 0;
}