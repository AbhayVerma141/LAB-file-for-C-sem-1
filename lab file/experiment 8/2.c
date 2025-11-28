//Perform pointer arithmetic (increment and decrement) on pointers of different
//data types. Observe how the memory addresses change and the effects on
//data access
#include<stdio.h>
int main()
{
    int x ;
    float y; 
    printf("enter your integer value = ");
    scanf("%d", &x);
    printf("enter your float value = "); //taking inputs from the user
    scanf("%f", &y);
    int *px = &x;
    float *py = &y;
    printf("the address before increment and decrement is \n");
    printf("for integer value = %p\n", (void*)px);
    printf("for float value = %p\n", (void*)py);
    px++, py++, x++, y++;
    printf("the address after increment is \n");
    printf("for pointer integer value = %p       for integer value = %d\n", (void*)px, x);
    printf("for pointer float value = %p         for float value = %.2f\n", (void*)py, y);
    px--, py--, x--, y--;
    printf("the address after decrement is \n");
    printf("for pointer integer value = %p       for integer value = %d\n", (void*)px, x);
    printf("for pointer float value = %p         for float value = %.2f\n", (void*)py, y);
    return 0;
}
//output the address value changes by 4bit which is the storage size of 1 integer and float value