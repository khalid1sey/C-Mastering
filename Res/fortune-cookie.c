#include <stdio.h>
#include <stdlib.h>

void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n", msg);
	printf("msg occupies %i bytes\n", sizeof(msg));
}

int main(void){
	fortune_cookie("This is Cookie Service");
	return 0;
}