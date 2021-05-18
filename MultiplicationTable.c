#include <stdio.h>
#include<stdlib.h>
int main()
{
int num1;
int num2;
int i;
printf("Type any number:");
scanf_s("%d", &num1);
for (i = 1; i != 20; i++) {
	num2 = num1 * i;
	printf("%d x %d = %d", num1, i, num2);
}
return 0;
}
