#include<stdio.h>
#include<string.h>

int main(){
    char s1[]="harry";
    char s2[]="bhai";
    puts(strcat(s1,s2)); //strcat
    printf("%d\n",strlen(s1)); //now s1 is now 9 in length
    printf("%s\n",s1);
    //reversed string
    puts(strrev(s1));
    char s3[50];
    strcpy(s3,s1);
    puts(s3);
    puts(s2);
    return 0;
}