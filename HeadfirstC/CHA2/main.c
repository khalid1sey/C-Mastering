#include <stdio.h>
#include <stdlib.h>

int y = 20; //this is global variable 
int main(void){
    int x =10;  //this is local variable bc resides in function and after function executed it gets deleted most importantly it resides in stack
    printf("%p\n", &x);
    printf("%p\n", &y);
    return 0;
    int n = 0;
    char msg[n];
    scanf("%s", msg);

    printf("size of msg is : %li", sizeof(msg));
}