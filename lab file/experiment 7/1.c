//Write a C program that uses functions to perform the following operations:
//a. Reading a complex number.
//b. Writing a complex number.
//c. Addition and subtraction of two complex numbers

#include<stdio.h>
int read()
{
    typedef struct number
    {
        int real;
        int image;
    };   
    printf("enter the real part of the number = ");
    scanf("%d", &real);                    
    printf("enter the imaginary part of the number = ");
    scanf("%d", &image);
}
int write()
{ //display a complex number
    int read(number);
    if (image >= 0)
    { 
        printf ("complex number is = %d + %di \n",read() , image);
    }
    else
    {
        printf ("complex number is = -%d - %di \n", real , image);
    }
}
int main()
{
    int read();
}
