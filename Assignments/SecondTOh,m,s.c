#include <stdio.h>
#include <stdlib.h>
// SECONDS INTO HOUR, MINUTES AND SECONDS
int main()
{
float seconds,hour,minute, remsec;
printf("Total time in seconds:");
scanf("%f",&seconds);
hour=seconds/3600;
minute=(hour-(int)hour)*60;
remsec=seconds-((int)hour*3600+(int)minute*60);
printf("\n%d Hour%s %d Minute%s %d Second%s\n",(int)hour, (int)hour!=1 ? "s":"", (int)minute, (int)minute!=1 ? "s":"", (int)remsec, (int)remsec!=1 ? "s":"");
return 0;
}
