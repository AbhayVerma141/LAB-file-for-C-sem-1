//Write a C program that uses functions to perform the following operations:
//a. Reading a complex number.
//b. Writing a complex number.
//c. Addition and subtraction of two complex numbers

#include<stdio.h>
struct complex
{
    int real;
    int image;
}n;
struct complex number (struct complex n) //use struct cause we need to use struct data type to insert value
{
    printf("enter the real part of the number = ");
    scanf("%d", &n.real);
    printf("enter the imaginary part of the number = ");
    scanf("%d", &n.image);
    return n;
}
void print(struct complex x) //used void cause we dont need to give input
{
 if (x.image >= 0)
        printf("%.2f + %.2fi", x.real, x.imag);
    else
        printf("%.2f - %.2fi", x.real, x.imag);
};
struct complex add(struct complex n1, struct complex n2) //addition
{
    struct complex ans;
    ans.real = n1.real + n2.real;
    ans.image = n1.image + n2.image;
    return ans;
};
struct complex subtract(struct complex n1, struct complex n2) //subtraction
{
    struct complex ans;
    ans.real = n1.real - n2.real;
    ans.image = n1.image - n2.image;
    return ans;
};
int main()
{
    int x;
    printf("how many complex numbers you want to print = ");
    scanf("%d", &x);
    struct complex [x];
    printf("enter your complex number below:");
    for( int i = 0 ; i < x ; i++ ) //loop to input values
    {
        printf("enter the real part of the complex number = ");
        scanf("%d", &n.real);
        printf("enter the imaginary part of the complex number = ");
        scanf("%d", &n.image);
    }
    printf("your complex numbers are: ");
    for( int i = 0 ; i < x ; i++ )
    {
        printf struct complex (i);
    }
    return 0;
}
