/*Write a program to calculate the area of a triangle
using Hero's formula*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float a, b, c, area, S;
    printf("\n Enter the lengths of the three sides of the triangle : ");
    scanf("%f %f %f", &a, &b, &c);
    S = (a + b + c)/2;

    // sqrt is a mathematical function defined in math.h header file
    area = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\n Area = %f", area);
    return 0;
}