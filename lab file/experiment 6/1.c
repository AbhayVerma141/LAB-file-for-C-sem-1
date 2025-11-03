//Develop a recursive and non-recursive function FACT(num) to find the factorial of a number Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. 

int fact_R()
{
    int n = 0;
    if (n == 0)
        return 1;
    else
        return n * FACT_recursive(n - 1);
}
int fact_NR()
{
    int n ;

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int bin()
{
    
}
