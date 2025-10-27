//WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three

#include<stdio.h>
int main()
{
    float l1,b1,l2,b2,l3,b3;
    float p1,p2,p3;
    float max;
    int rect;
    printf("enter the length and breadth of the first rectangle = ");
    scanf("%f %f", &l1, &b1);
    printf("enter the length and breadth of the second rectangle = ");
    scanf("%f %f", &l2, &b2);
    printf("enter the length and breadth of the third rectangle = ");
    scanf("%f %f", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3); //calculate the perimeters

    max = (p1 > p2 && p1 > p3) ? p1 : (p2 > p3 ? p2 : p3); //used ternary operator to find max
    rect = (max == p1) ? 1 : (max == p2 ? 2 : 3);

    printf("perimeter of rectangle 1 = %.2f", p1);
    printf("perimeter of rectangle 2 = %.2f", p2);
    printf("perimeter of rectangle 3 = %.2f", p3);
    printf("rectangle %d has the highest perimeter = %.2f \n", rect, max);
    return 0;
}