//Write a program that prompts the user to enter their name and age.

#include<stdio.h>
int main()
{
    char name[50];
    int age;
    printf("enter your name: ");
    scanf("%s", name);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("Hello %s, you are %d years old. \n", name, age);
    return 0;
}