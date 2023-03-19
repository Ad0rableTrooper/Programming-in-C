// Write a program to add two integers using the function
#include <stdio.h>
// FUNCTION DECLARATION
int sum(int a, int b);
int main(){
    int num1, num2, total=0;
    printf("\nEnter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    total = sum(num1, num2);
    // Function CALL
    printf("\n Total = %d", total);
    return 0;

}
// FUNCTION DEFINATION
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}