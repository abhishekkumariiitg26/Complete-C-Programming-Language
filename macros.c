#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("Line number is: %d\n",__LINE__);
    printf("Time is: %s\n",__TIME__);
    printf("file is: %s\n",__FILE__);
    // printf("ansi is: %d\n",__STDC__);
    printf("date is: %s\n",__DATE__);
    return 0;
}