// simple calculator for operation between 2 numbers
#include<stdio.h>

int main(){
    printf("Welcome to the Simple Calculator");
    double num1;
    double num2;
    printf("enter 1st number: "); 
    scanf("%lf", &num1); //user enters 1st number
    printf("enter 2nd number: ");
    scanf("%lf", &num2); //user enters 2nd number
    /*user gets basic operations based on the operands they entered:
    addition
    subtraction
    multiplication
    division*/
    printf("operations are:\n"); 
    printf("sum: %lf\n", num1 + num2);
    printf("difference: %lf\n", num1 - num2);
    printf("product: %lf\n", num1 * num2);
    printf("division: %lf\n\n", num1/num2);
    //modulus (%) not added because it is invalid for float!
    printf("thankyou for using the calculator\nmade by shantanu");
   

    return 0;
}
