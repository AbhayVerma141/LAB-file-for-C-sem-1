// WAP that reads two matrices A (m x n) and B (p x q) and computes the product
//A and B. Read matrix A and matrix B in row major order respectively. Print both
//the input matrices and resultant matrix with suitable headings and output should
//be in matrix format only. Program must check the compatibility of orders of the
//25
//matrices for multiplication. Report appropriate message in case of
//incompatibility.
#include <stdio.h>
int main() 
{
    int A[2][3], B[3][2], C[2][2];
    int i,j,k;
    printf("enter the elements of matrix A size 2X3"); //takes input of matrix A
    for( i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("enter the %dX%d element of the list = ", i+1 , j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter the elements of matrix B size 3X2"); //takes input of matrix B
    for( i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("enter the %dX%d element of the list = ", i+1 , j+1);
            scanf("%d", &B[i][j]);
        }
    }
    for( i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            C[i][j] = 0; //assigning the output matrix value to 0 so it dont print garbage value
        }
    }
    for (i = 0; i < 2; i++) //loop to check rows
    {
        for (j = 0; j < 2; j++) //loop to check collumns
        {
            for (k = 0; k < 3; k++) //loop to multiply
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
        printf("%d ", C[i][j]); //prints output
    }
    printf("\n");
    }
}

