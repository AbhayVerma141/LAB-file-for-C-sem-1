//Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address. 
#include<stdio.h>
#include<string.h>

union ad
{
    char name[50];
    char home[50];
    char hostel[50];
    char city[50];
    char state[50];
    char zip[50];
};
int main()
{
    union ad b;
    char a1[50], b1[50], c1[50], d1[50], e1[50], f1[50];

    printf("enter your name = ");
    scanf("%s", b.name);
    strcpy(a1, b.name);

    printf("enter your home address = ");
    scanf("%s", b.home);
    strcpy(b1, b.home);
    printf("enter your hostel address = ");
    scanf("%s", b.hostel);
    strcpy(c1, b.hostel);
    printf("enter your city name = ");
    scanf("%s", b.city);
    strcpy(d1, b.city);
    printf("enter your state name = ");
    scanf("%s", b.state);
    strcpy(e1, b.state);
    printf("enter your zip = ");
    scanf("%s", b.zip);
    strcpy(f1, b.zip);
    printf("_________YOUR DETAILS________ \n");
    printf("NAME - %s\n", a1);
    printf("HOME ADDRESS - %s\n", b1);
    printf("HOSTEL ADDRESS - %s\n", c1);
    printf("CITY NAME - %s\n", d1);
    printf("STATE NAME - %s\n", e1);
    printf("ZIP - %s\n", f1);
    return 0;
}
//i used chatgpt to do this code