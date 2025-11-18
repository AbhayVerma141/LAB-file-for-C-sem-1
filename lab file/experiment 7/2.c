//Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary. 
#include<stdio.h>

struct employe
{
    char name[50];
    int sname;   
    int base;
};

int main()
{
    struct employe p[100];
    float DA, z; 
    for (int i = 0; i < 100; i++)   
    {
        printf("enter the detail of employe no. %d = ", i + 1); //taking input
        scanf("%s %d %d", p[i].name , &p[i].sname, &p[i].base);
    }
    printf ("______________________EMPLOYE____________________ \n");
    for (int i = 0; i < 100; i++)
    {
        DA = p[i].base * (52/100); //calculating DA
        z = p[i].base + DA;

        printf("the details of the employe is = Name = %s , Gross salary = %.2f \n",
                p[i].name, z );
    }
    return 0;
}
