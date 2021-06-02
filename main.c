
#include <stdio.h>
#include <stdlib.h>
// SECONDS INTO HOUR, MINUTES AND SECONDS
int main()
{
float length, breadth, Area;
printf("Type Length:");
scanf("%f",&length);
printf("Type Breadth:");
scanf("%f",&breadth);
Area=length*breadth;
printf("The Area is: %.3f Square Units",Area);
return 0;
}
