//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.

#include<stdio.h>

int main()
{
    float l,b;
    printf("enter the length: ");
    scanf("%f", &l);
    printf("enter the breadth: ");
    scanf("%f", &b);
    printf("the area of the rectangle is = %f \n", l * b);
    printf("the perimeter of the rectangle is = %f \n", 2*(l + b));
    return 0;
}