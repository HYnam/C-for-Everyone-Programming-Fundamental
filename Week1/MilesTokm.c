/* The distance of a marathon in kilometers */
#include<stdio.h>   // Preprocessor for printf

int main(void) {    // Program return as integer
    // int miles = 26, yards = 385;
    int miles, yards;
    printf("Enter miles ");
    scanf("%d", &miles);
    printf("\nEnter yards ");
    scanf("%d", &yards);
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);

    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}