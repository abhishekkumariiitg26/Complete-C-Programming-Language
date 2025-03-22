#include<stdio.h>
#include<string.h>


struct Students{
    int roll;
    char name[50];
    int grade;
};
struct Students bittu,puttu,prince,abhi;

int main(){
    bittu.roll=1;
    strcpy(bittu.name,"Abhishek Kumar");
    bittu.grade=16;
    puttu.roll=2;
    strcpy(puttu.name,"Ashish Kumar");
    puttu.grade=10;
    prince.roll=4;
    strcpy(prince.name,"Aditya Kumar");
    prince.grade=10;
    abhi.roll=5;
    strcpy(abhi.name,"Abhi Kumar");
    abhi.grade=6;
    printf("Student Details:\n");
    printf("Roll: %d, Name: %s, Grade: %d\n", bittu.roll, bittu.name, bittu.grade);
    printf("Roll: %d, Name: %s, Grade: %d\n", puttu.roll, puttu.name, puttu.grade);
    printf("Roll: %d, Name: %s, Grade: %d\n", prince.roll, prince.name, prince.grade);
    printf("Roll: %d, Name: %s, Grade: %d\n", abhi.roll, abhi.name, abhi.grade);

    return 0;
}