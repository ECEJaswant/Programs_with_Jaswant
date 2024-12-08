/*Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/

#include <stdio.h>

int main()
{
    int Time, Principal, Rate;

    printf("Enter Time =\t");
    scanf("%d", &Time);

    printf("Enter Principal =\t");
    scanf("%d", &Principal);

    printf("Enter Rate =\t");
    scanf("%d", &Rate);

    printf("The value of Simple Intrest is %d", (Time * Principal * Rate) / 100);

    return 0;
}
