#include<stdio.h>
#include<string.h>


union Students{
    int roll;
    char name[50];
    int grade;
};
union Students bittu;

int main(){
    bittu.grade=16;
    strcpy(bittu.name,"Abhishek Kumar");
    bittu.roll=1;
   
    printf("Student Details:\n");
    printf("Roll: %d\n, Name: %s\n, Grade: %d\n", bittu.roll, bittu.name, bittu.grade);
   
    return 0;
}