/*Write a program to demonstrate the use of printf
and scanf statements to read and print values of 
variables of different data types*/
#include<stdio.h>
int main(){
    int num;
    float amt;
    char code;
    double pi;
    long int population_of_india;
    char msg[10];

    printf("\n Enter the value of num : ");
    scanf("%d", &num);
    printf("\n Enter the value of amt : ");
    scanf("%f", &amt);
    printf("\n Enter the value of pi : ");
    scanf("%e", &pi);
    printf("\n Enter the value of population of India : ");
    scanf("%ld", &population_of_india);
    printf("\n Enter the value of message : ");
    scanf("%s", &msg);
    
    printf("\n NUM = %d \n AMT = %f \n CODE = %c \n PI = %e \n POPULATION OF INDIA = %ld \n MESSAGE = %s", num, amt, code, pi, population_of_india, msg);
    return 0;
}