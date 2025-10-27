//According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include<stdio.h>

int main()
{
    int year,leap,day;
    printf("enter the year = ");
    scanf("%d", &year);
    leap = (year - 1) / 4 - (year -1) / 100 + (year -1 )/ 400; //count leap years before the given year
    day = ((year - 1) * 365 + leap) % 7; //total days passed till previous year
    if ( day == 0 )
        printf("on 1st January %d, it was Monday \n", year);
    else if (day == 1)
        printf("on 1st January %d, it was Tuesday \n", year);
    else if (day == 2)
        printf("on 1st January %d, it was Wednesday \n", year);
    else if (day == 3)
        printf("on 1st January %d, it was Thursday \n", year);
    else if (day == 4)
        printf("on 1st January %d, it was Friday \n", year);
    else if (day == 5)
        printf("on 1st January %d, it was Saturday \n", year);
    else if (day == 6)
        printf("on 1st January %d, it was Sunday \n", year);
    return 0;
}