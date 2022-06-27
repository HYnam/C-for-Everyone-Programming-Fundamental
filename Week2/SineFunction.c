/*
A program that prints the sine function for an input x between 0, 1
*/
#include<math.h>
#include<stdio.h>
int main(void) {
    double x, result = 0;

    printf("Input a number between 0 and 1: ");
    scanf("%lf", &x);

    result = sin(x);

    printf("\nThe sine of %.8f is %.8f\n", x, result);
    return 0;
}