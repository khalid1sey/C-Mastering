#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c = 0;
    while (c <= 10)
    {
        printf("I am Printed %d\n\n", c);
        c = c + 1;

        if (c == 10)
        {
            puts("Printing is done\n");
        }
    }
    return (0);
}