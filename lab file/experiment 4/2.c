//Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function. 

#include<stdio.h>
int main()
{
    int z = 1; //global varaible
    for(int x = 0; x < 10; x++)
    {
        int y; //local variable
        y = y * x;
        z = z * x;
        printf ("the table is = %d \n", y );
    }
    //printf("enter the number = "); //these commands can't be used outside the function as y is not a global variable
    //scanf("%d", &y);
    printf("enter the number = ");
    scanf("%d", &z);
    printf("the table is = %d \n", z );
}