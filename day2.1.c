//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main() {
    float a , b;
    printf("enter length of rectangle :");
    scanf(" %f", &a);
    printf("enter breadth of rectangle : ");
    scanf(" %f", &b);
    printf("area of rectangle is : %f\n", a*b);
    printf("perimeter of rectangle is : %f\n", 2*(a+b));



    return 0;
}