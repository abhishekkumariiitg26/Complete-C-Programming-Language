#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of element you want in the dynamic array: ");
    scanf("%d",&n);

    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value of %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ptr[i]);
       
    }

    

    return 0;
}