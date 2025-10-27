//Write a C program to add two numbers, take number from user

#include<stdio.h>
int main()
{
    int x,y, sum;
    printf("enter the numbers = ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf(" sum of the numbers is %d \n", sum);
    return 0;
}