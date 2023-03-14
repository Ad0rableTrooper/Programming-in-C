/*Write a program to demonstrate the use of printf
statement to print values of variables of different data
types*/
#include<stdio.h>
int main(){
    // Declare and initialize variables
    int num = 7;
    float amt = 123.45;
    char code = 'A';
    double pi = 3.1415926536;
    long int population_of_india = 10000000000;
    char msg[] = "Hi";

    // Print the values of variables
    printf("\n NUM = %d \n AMT = %f \n CODE = %c \n PI = %e \n POPULATION OF INDIA = %ld \n MESSAGE = %s", num, amt, code, pi, population_of_india, msg);
    return 0;
}