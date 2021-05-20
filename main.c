#include<stdio.h>
#include<time.h>

int main()
{
    printf("\n\n\t\t\t\t\t DATE AND TIME\n\n\n");

    time_t t;   // not a primitive datatype
    time(&t);

    printf("\tYou are seeing this at(date and time): %s", ctime(&t));

    printf("\n\n\t\t\t\t\t THANK YOU !\n\n\n");
    return 0;
}
