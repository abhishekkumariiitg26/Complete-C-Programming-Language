#include<stdio.h>
int main(){
    printf("enter the number of terms of the ap: ");
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a=4,d=3;
        printf("%d ",a+(i-1)*d);
    }
    
    return 0;
}
