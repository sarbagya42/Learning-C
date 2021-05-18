#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1;
	int num2;
	int c = 0;
	int len;
	int da = 0;
	int length[10];
	printf("Type any Binary Number:");
	scanf("%d", &num1);
	itoa(num1, length, 10);
	len = strlen(length);
	while (c != len) {
		num2 = num1 % 10;
		da = da + num2 * pow(2, c);
		c = c + 1;
		num1 = num1 / 10;
	}
	printf("\n");
	printf("The Decimal Equivalent is: %d", da);

	printf("\n");


	return 0;
}
