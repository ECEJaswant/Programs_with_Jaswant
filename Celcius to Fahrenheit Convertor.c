/*Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit)*/

#include <stdio.h>

int main()
{
    int Celcius;
    printf("Enter Temprature in Celcius\t");
    scanf("%d", &Celcius);
    printf("Now Temperature in Fahrenheit is %f", (Celcius * 9.0/5.0) + 32);
    return 0;
}