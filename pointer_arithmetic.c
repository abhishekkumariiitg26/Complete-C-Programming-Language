#include<stdio.h>
int main(){
    int a=11;
    int *ptr=&a;
    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    printf("%d\n",ptr+2);
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+1));//invalid value
    return 0;
}