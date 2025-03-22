#include<stdio.h>
int main(){
    int a=11;
    int *ptr=&a;
    int *ptr_null=NULL;
    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",&ptr); // gives address of the pointer
    printf("%d\n",ptr_null);
    printf("%d\n",*ptr_null);

    return 0;
}