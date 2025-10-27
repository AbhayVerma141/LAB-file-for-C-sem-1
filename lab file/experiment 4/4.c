//Declare a static local variable inside a function. Observe how its value persists across function calls

#include <stdio.h>

int countCalls() 
{
    static int count = 0; // static variable
    count++;
    return count;
}

int main() 
{
    printf("Call 1 count = %d\n", countCalls());
    printf("Call 2 count = %d\n", countCalls());
    printf("Call 3 count = %d\n", countCalls());
    return 0;
}
