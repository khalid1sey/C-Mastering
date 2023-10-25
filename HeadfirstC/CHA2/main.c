#include <stdio.h>
#include <stdlib.h>

int y = 20; //this  global variable 
int main(void){
    int x =10;  //this  local variable bc resides in function and after function executed it gets deleted most importantly it resides in stack
    printf("%p\n", &x);
    printf("%p\n", &y);


    char msg[] = "Hello World";
   
    printf("size of msg  : %li", sizeof(msg)); //the characters in msg are actually 11 but there  null terminating at the last (\0) so they are 12
    
    printf("adress of msg  : %p\n", &msg);
    printf("adress of msg  0 : %p\n", &msg[0]); // the first adress and the msg variable adress is the same so it true
    printf("adress of msg  1 : %p\n", &msg[1]);
    printf("adress of msg  5: %p\n", &msg[5]);
    printf("adress of msg  null terminating 12: %p\n", &msg[12]);
    return 0;
}