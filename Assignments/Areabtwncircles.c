#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.141593
// Area between two circles

int main()
{
    float r,n,area;
    printf("Type radius of bigger circle:");
    scanf("%f",&r);
    printf("Type area of smaller circle:");
    scanf("%f",&n);
    area=Pi*pow(r,2)-Pi*pow(n,2);
    printf("The area is %f",area);
    return 0;
}
