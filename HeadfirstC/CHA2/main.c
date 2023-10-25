#include <stdio.h>
#include <stdlib.h>

int y = 20; //this is global variable 
int main(void){
    int x =10;  //this is local variable bc resides in function and after function executed it gets deleted most importantly it resides in stack
    printf("%p\n", &x);
    printf("%p\n", &y);


    char msg[] = "Hello World";
   
    printf("size of msg is : %li", sizeof(msg)); //the characters in msg are actually 11 but there is null terminating at the last (\0) so they are 12
        return 0;
}