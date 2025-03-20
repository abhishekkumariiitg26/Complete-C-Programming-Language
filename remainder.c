#include<stdio.h>
int main(){
    int dividend,divisor;
    printf("enter the dividend: ");
    scanf("%d",&dividend);
    printf("enter the divisor: ");
    scanf("%d",&divisor);
    int quotient=(dividend/divisor);
    int remainder;
    remainder=dividend-quotient*divisor;
    printf("The remainder when %d is divided by %d will be %d",dividend,divisor,remainder);
    return 0;
}