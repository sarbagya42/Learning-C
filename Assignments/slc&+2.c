#include <stdio.h>
#include <stdlib.h>
// Multiple String reading and printing

int main()
{
    float percentage_slc, percentage_plustwo;
    printf("Type your percentage in SLC and +2:");
    scanf("%f %f",&percentage_slc,&percentage_plustwo);
    if(percentage_slc>=60 && percentage_plustwo>=60){
        printf("“CONGRATULATIONS!!! You have first division in both SLC and +2");
    }
    return 0;
}
