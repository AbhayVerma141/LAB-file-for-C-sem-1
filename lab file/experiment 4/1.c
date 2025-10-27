// Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include<stdio.h>
int x, y ,z;
int main()
{
    printf("enter the value of the sides of triangle = ");
    scanf("%d %d %d", &x, &y, &z);
    printf("perimeter of the triangle is = %d \n", x + y + z );
    if (x == y && y == z) //checking if equilateral 
        {
            printf("the triangle is equilateral \n ");
        }
        else if (x == y || y == z || x == z ) //checking if isoceles
        {
            printf("the triangle is isoceles \n");
        }
        else
        {
            printf("the triangle is scalene \n");
        }
    return 0;
}