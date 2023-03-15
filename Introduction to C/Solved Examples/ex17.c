// Write a program to print the digit at ones place of a number
#include<stdio.h>
#include<conio.h>
int main(){
    int num, digit_at_ones_place;
    clrscr();
    printf("\n Enter any number: ");
    scanf("%d", &num);
    digit_at_ones_place = num % 10;
    printf("\n The digit at ones place of %d is %d", num, digit_at_ones_place);
    return 0;
}