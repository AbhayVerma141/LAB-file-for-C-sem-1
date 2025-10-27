//Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks

#include <stdio.h>

int main() 
{
    int a = 10;   // declared in main block
    printf("Outside inner block: a = %d\n", a);
    {
        int b = 20;   // declared inside inner block
        printf("Inside inner block: a = %d\n", a);
        printf("Inside inner block: b = %d\n", b);
    }
    printf("Outside inner block a = %d\n", a);
    return 0;
}
