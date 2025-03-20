#include<stdio.h>
int main(){
    const float PI = 3.14;
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f",&radius);
    float volume= (4.0/3.0)*PI*radius*radius*radius;
    printf("The volume of sphere is: %f.",volume);
    return 0;
}