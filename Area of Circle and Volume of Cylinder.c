/*Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height*/

#include<stdio.h>

int main(){
     int r = 6;
     int hight = 10;
     printf("The area of circle with radius %d is %f\n", r, 3.14*r*r);
     printf("The volume of cylender with radius %d and hight %d is %f\n", r, hight, 3.14*r*r*hight);
    return 0;
}