//Write a C program to calculate area of a rectangle:

#include<stdio.h>

int main(){
    int length, breath;
     printf("Enter length of recatange\n");
     scanf("%d", &length);

     printf("Enter breath of recatange\n");
     
     scanf("%d", &breath);
     
     printf("The Area of a Rectange is %d", length*breath);
    return 0;
}