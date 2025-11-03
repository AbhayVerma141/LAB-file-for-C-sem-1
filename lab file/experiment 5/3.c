//WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.

#include<stdio.h>
int main()
{
    int n , x = 1, check , y = 0 ;
    printf("enter the length of the list = ");
    scanf("%d", &n);
    int list[n];
    for ( int i = 0; i < n; i++ )
    {
        printf("enter the %d number of the list = ", x);
        scanf("%d", &list[i]);
        x++;
    }
    printf ("enter the number you want to check = ");
    scanf("%d", &check);
    for ( int i = 0; i < n; i++ )
    {
        if (check == list[i])
        {
            y++;
        }
    }
    printf("the frequency of %d in the list is = %d \n", check , y);
    return 0;
}