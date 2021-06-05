#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Area of triangle with three sides given

int main()
{
    float a, b, c, s, Area;
    printf("Type three sides of a Triangle:");
    scanf("%f" "%f" "%f",&a, &b, &c);
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The Area of triangle is: %f sq units",Area);
    return 0;
}
