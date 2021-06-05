#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Fahrenheit to Celsius

int main()
{
    float f,c;
    printf("Type Temperature in Fahrenheit:");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("Temperature in Celsius is %.4f", c);
    return 0;
}
