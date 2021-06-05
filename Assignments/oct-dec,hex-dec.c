#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Output: Decimal Integer:10, Octal Eqv=8, Hex Eqv=255.

int main()
{
    int a,b,c;
    a=10;
    b=010;
    c=0xFF;
    printf("Decimal Integer is %d",a);
    printf("\n Octal integer Equivalent in decimal is %d",b);
    printf("\n Hexadecimal integer Equivalent in Decimal is %d",c);
    return 0;
}
