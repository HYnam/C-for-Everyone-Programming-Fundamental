#include <stdio.h>
#define PI 3.14159  

int main() {
    double area = 0.0, radius = 0.0;

    printf("Enter radius: ");
    scanf("%lf", &radius);  
    // For printf, arguments of type float are promoted to double so both %f and %lf are used for double. 
    // For scanf, you should use %f for float and %lf for double

    area = PI * radius * radius;

    printf("radius of %lf meters; are of %ld sq. meters\n", radius, area);
    return 0;
}