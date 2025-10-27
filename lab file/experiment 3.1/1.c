//1.	WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user. 

#include <stdio.h>

int main()
{
    float a,b,c;
    printf("enter three sides of the triangles = ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) //checks is trianlge exists
    {
        if (a == b && b == c) //checking if equilateral 
        {
            printf("the triangle is equilateral \n ");
        }
        else if (a == b || b == c || a == c) //checking if isoceles
        {
            printf("the triangle is isoceles \n");
        }
        else
        {
            printf("the triangle is scalene \n");
        }

    }
    else
    {
        printf("the triangle does not exist \n");
    }
    return 0;
}