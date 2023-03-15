//Write a program to calculate the area of circle
#include<stdio.h>
#include<conio.h>
int main(){
    float radius;
    double area, circumference;
    clrscr();
    printf("\n Enter the radius of the circle: ");
    scanf("%f", radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3014 * radius;
    printf("Area = %.21e", area);
    printf("\n CIRCUMFERENCE = %.2e", circumference);
    return 0;
}