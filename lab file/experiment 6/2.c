//Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers. 
#include<stdio.h>

int GCD(int num1, int num2)
{
    int gcd;
    if ( num1 == 0 ) //checking if num1 is = 0
    {
        printf("gcd is %d", num1);
    }
    else if ( num2 == 0 ) //checking if num2 is = 0
    {
        printf("gcd is %d", num2); 
    }
    else
    {
          while (num2 != 0)
        {
            gcd = num2;
            num2 = num1 % num2; //logic to find GCD
            num1 = gcd;
        }
        return num1;
    }
}
int main()
{
    int x , y , z;
    printf("enter the 1st number = ");
    scanf("%d", &x);
    printf("enter the 2nd number = "); //taking up the values of 2 numbers
    scanf("%d", &y);
    z = GCD(x , y); //storing it in function
    printf("GCD is = %d", z );
}