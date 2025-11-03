// Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include<stdio.h>
int x, y ,z;
int triangle()
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
}
int area() //function to check area of rectangle
{
    printf("enter the value of the sides of rectangle = ");
    scanf("%d %d ", &x, &y);
    printf ("area of rectangle = %d", x * y);
}
int main()
{
    triangle();
    area(); //calling functions
    return 0;
}
