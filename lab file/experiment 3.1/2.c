//2.	WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).

#include<stdio.h>
int main()
{
    float weight, height, bmi;
    printf("enter your weight in kg = ");
    scanf("%f", &weight);
    printf("enter your height in meters = ");
    scanf("%f", &height); //taking inputs
    
    bmi = weight / (height * height); //formula for bmi
    printf("your BMI is = %.2f\n",bmi);
    if (bmi < 15)
        printf("starvation \n");
    else if ( bmi >= 15.1 && bmi <= 17.5)
        printf("Anorexic \n");
    else if ( bmi >= 17.6 && bmi <= 18.5)
        printf("you are underweight \n");
    else if ( bmi >= 18.6 && bmi <= 24.9)
        printf("you are ideal weight \n");
    else if ( bmi >= 25 && bmi <= 29.9)
        printf("you are overweight \n");
    else if ( bmi >= 30 && bmi <= 39.9)
        printf("you are obese \n");
    else
        printf("you are morbity obeses \n");
    return 0;
    
}