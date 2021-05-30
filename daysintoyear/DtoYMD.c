#include <stdio.h>
#include <stdlib.h>
//Days into Year, Month and Days
int main()
{
double days, year,month, remday;
printf("Total days:");
scanf("%lf",&days);
year=days/364;
month=(year-(int)year)*12;
remday=(month-(int)month)*32;
printf("\n%d Year%s %d Month%s %d Day%s\n",(int)year, (int)year!=1 ? "s":"", (int)month, (int)month!=1 ? "s":"", (int)remday, (int)remday!=1 ? "s":"");
return 0;
}
