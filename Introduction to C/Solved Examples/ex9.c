// Write a program to illustrate the use of unary prefix increment and decrement operators
#include <stdio.h>
int main(){
    int num = 3;
    // Using unary prefix increment operator
    printf("\n The value of num = %d", num);
    printf("\n The value of ++num = %d", ++num);
    printf("\n The new value of num = %d", num);

    // Using the unary prefix decrement operator

    printf("\n\n The value of num = %d", num);
    printf("\n The value of --num = %d", --num);
    printf("\n The new value of num = %d", num);
    return 0;
}