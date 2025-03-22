#include<stdio.h>
int main(){
    // int *a,b; this will not initialise both as pointer
    typedef int* intptr;
    intptr a,b;  // this will initialise both as pointer
    int c=15;
    a=&c;
    b=&c;
    printf("%d, %d",a,b);
    return 0;
}