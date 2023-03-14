#include<stdio.h>
#include<conio.h>
int main(){
    float c = 20.0;
    printf("\n Result = %f", c % 5);
    // WRONG. Modulus operator is being applied to a float operand
    return 0;
}

// Solve this problem on your own...