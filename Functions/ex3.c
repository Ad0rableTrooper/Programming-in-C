// Write a program to find the biggest of three integers using functions
#include <stdio.h>
int greater(int a, int b, int c);
int main(){
    int num1, num2, num3, large;
    printf("\n Enter the first number: ");
    scanf("%d", &num1);
    printf("\n Enter the second number: ");
    scanf("%d", &num2);
    printf("\n Enter the third number: ");
    scanf("%d", &num3);

    large = greater(num1, num2, num3);
    printf("\n Largest number = %d", large);
    return 0;
}

int greater(int a, int b, int c){
    if (a>b && a>c){
        return a;
    }
    if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}