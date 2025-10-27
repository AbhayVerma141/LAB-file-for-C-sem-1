//2.	WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.

#include<stdio.h>

int main()
{
    float c; // we are taking float value as the input can be in decimals also
    printf("enter your temp in celsius");
    scanf("%f", &c); // takes up the value we enter of temp in C
    printf("the temp in fehrenheit will be = %f\n", (c * 9 / 5)+ 32); // solves and gives output
    return 0;
}