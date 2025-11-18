//Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the  sequence up to num

#include<stdio.h>

int FIBO(int num)
{
    int x = 0, y = 1, z;
    if ( num == 0 )
    {
        printf ("the series is = %d", num ); //checking if number is 0
    }
    else if ( num == 1 )
        printf ("the seires is = %d", num); //checking number is 1
    else
    {
        z = FIBO (num - 1) + FIBO (num - 2); //Fibonacci serries logic
    }
    return z;
}
int main()
{
    int number, temp;
    printf("enter the range of the series = ");
    scanf("%d", &number);
    //temp = FIBO(number);
    for (int i = 0; i < number; i++)
    {
        temp = FIBO(i);
    }
    printf (" the seires is = %d", temp);
}