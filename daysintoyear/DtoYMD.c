#include <stdio.h>
#include <stdlib.h>
//Days into Year, Month and Days
int main()
{
float days, year,month, remday,k;
printf("Total days:");
scanf("%f",&days);
year=days/365;
month=(year-(int)year)*12;
k=month-(int)month;
remday=(k)*31;
if(k>=0.5){
    remday=remday+1;
    }
printf("\n%d Year%s %d Month%s %d Day%s\n",(int)year, (int)year!=1 ? "s":"", (int)month, (int)month!=1 ? "s":"",(int)remday, (int)remday!=1 ? "s":"");
return 0;
}
