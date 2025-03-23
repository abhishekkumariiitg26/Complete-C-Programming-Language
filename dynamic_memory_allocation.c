#include <stdio.h>
#include <stdlib.h>
int main()
{
    // why we have used (int*)malloc or (int*)calloc? 
    // because they return void pointer and we have to typecast it to int * pointer
    int n;
    printf("Enter the number of element you want in the dynamic array: ");
    scanf("%d", &n);

    int *ptr;
    // ptr=(int*)malloc(n*sizeof(int));
    ptr = (int *)calloc(n, sizeof(int)); // this line for calloc otherwise both are same
    // but calloc initialise with 0;

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value of %d element: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    // realloc
    int p;
    printf("\nEnter the new number of element you want in the new dynamic array: ");
    scanf("%d", &p);

    
    // ptr=(int*)malloc(n*sizeof(int));
    ptr = (int *)realloc(ptr, p*sizeof(int)); // this line for calloc otherwise both are same
    // but calloc initialise with 0;

    for (int i = 0; i < p; i++)
    {
        printf("\nEnter the new value of %d element: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The elements of the new array are: ");
    for (int i = 0; i < p; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}