//Write a function that accepts pointers as parameters. Pass variables by
//reference using pointers and modify their values within the function.
#include<stdio.h>
void pointer(int *px , float *py)
{
    *px = *px + 2;
    *py = *py + 10;
    //*px = *px * 100;
    //*py = *py * 20;
};
int main()
{
    int x;
    float y;
    printf("enter the integer value = ");
    scanf("%d", &x);
    printf("enter the float value = ");
    scanf("%f", &y);
    pointer(&x ,&y);
    printf("output integer = %d\n", x);
    printf("output float = %.2f\n", y);
    return 0;
}