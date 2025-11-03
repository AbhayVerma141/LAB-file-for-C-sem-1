//Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function. 

#include<stdio.h>
int Area() //function to calculate Area
{
    int x , y;
    printf("enter the value of the sides of rectangle = ");
    scanf("%d %d ", &x, &y);
    printf ("area of rectangle = %d", x * y);
}
int Parametre() //function to calculate parametre
{
    int z;
    z = 2 * ( x + y );
    printf ("the parametre of the rectangle is = %d", z);
}
int main()
{
    Area();
    Parametre(); //calling functions
    return 0;
}

//the output generates that x and y are undeclared identifiers which means we can no use local varaible of one function in another 
