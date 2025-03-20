#include<stdio.h>
int main(){
    // the modulo operator follows the sign of dividend
    printf("%d\n",5%2); //1
    printf("%d\n",-5%2); //1
    printf("%d\n",5%-2); //-1
    printf("%d\n",-5%-2); //-1
    return 0;
}