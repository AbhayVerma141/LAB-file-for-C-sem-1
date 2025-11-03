//WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements you want in list = ");
    scanf("%d", &n);
    int list[n];
    int positive = 0, negative = 0 , odd = 0, even = 0, zeroes = 0;
    for ( int i = 0 ; i < n; i++)
    {
        scanf("%d", &list[n] );
    }
    for ( int i = 0; i < n; i++)
    {
        if ( list[n] > 0)
        {
            positive++;
        }
        else if ( list[n] < 0)
        {
            negative++;
        }
        if ( list[n] % 2 == 0 )
        {
            even++;
        }
        else if ( list[n] % 2 == 1 )
        {
            odd++;
        }
        else
        {
            zeroes++;
        }
    }
    printf(" the number of positive numbers are = %d\n", positive);
    printf(" the number of negative numbers are = %d\n", negative);
    printf(" the number of even numbers are = %d\n", even);
    printf(" the number of odd numbers are = %d\n", odd);
    printf(" the number of zeroes numbers are = %d\n", zeroes);
    return 0;
}