// Write a program to subtract two long integers
#include<stdio.h>
#include<conio.h>
int main(){
    long int num1 = 1234567, num2, diff=0;
    clrscr();
    printf("\n Enter the number: ");
    scanf("%ld", &num2);
    diff = num1 - num2;
    printf("\n Difference = %ld", diff);
    return 0;
}