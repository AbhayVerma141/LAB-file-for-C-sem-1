//The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include <stdio.h>

int main() 
{
    float population = 100000;  // initial population
    float rate = 0.10;          // 10% growth per year
    int year;
    printf("Population growth over the last 10 years:\n");
    for (year = 1; year <= 10; year++) 
    {
        population = population + (population * rate);  // increase by 10%
        printf("At the end of year %d: %.0f \n", year, population);
    }
    return 0;
}
