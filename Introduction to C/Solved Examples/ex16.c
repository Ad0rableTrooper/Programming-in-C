// Write a program to read a character in upper case and then printt it in lower case
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    clrscr();
    printf("\n Enter any character in upper case: ");
    scanf("%c", &ch);
    printf("\n The character in lower case is: %c", ch+32);
    return 0;
}