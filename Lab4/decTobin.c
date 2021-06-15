#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Decimal to Binary
int main()
{
    int x;
    int y;
    char fin;
    char store[10];
    char data[10];
    printf("Type any decimal number:");
    scanf_s("%d",&x);
    while(x!=0){
            y=x%2;
            itoa(y,store,10);
            strcat(data,store);
            x=x/2;
            }
            printf("The Binary Equivalent of the provided number is: %s",strrev(data));
}
