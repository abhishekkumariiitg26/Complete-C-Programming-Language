#include<stdio.h>
int main(){

    int x,y;
    scanf(" %d      %d",&x,&y);  //only trailing spaces cause problems
    printf("%d %d ",x,y);
    return 0;
}