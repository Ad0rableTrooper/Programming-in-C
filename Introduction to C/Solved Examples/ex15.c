// Write a program to print the ASCII value of a character
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    clrscr();
    printf("\n Enter any character: ");
    scanf("%c", &ch);
    printf("\n The ASCII value of %c is: %d", ch, ch);
    return 0;
}