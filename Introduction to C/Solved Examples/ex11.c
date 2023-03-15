// Write a program to find the largest of three numbers using ternary operator
#include<stdarg.h>
#include<conio.h>
int main(){
    int num1, num2, num3, large;
    clrscr();
    printf("\n Enter the first number: ");
    scanf("%d", &num1);
    printf("\n Enter the second number: ");
    scanf("%d", &num2);
    printf("\n Enter the third number: ");
    scanf("%d", &num3);
    large = num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);

    printf("\n The largest number is: %d", large);
    return 0;

}