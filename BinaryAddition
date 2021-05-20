#include <stdio.h>
#include <stdlib.h>

int main() {
	int c = 0,d=0,pen,den,sum,num1,num2,num3,num4,len,da=0,pa=0,length[10],x,y;
    char fin,store[10],data[10],hen[10];
	printf("Type any Binary Number:");
	scanf("%d", &num1);
	printf("Type any Binary Number:");
	scanf("%d", &num3);
	itoa(num1, length, 10);
	len = strlen(length);
	while (c != len) {
		num2 = num1 % 10;
		da = da + num2 * pow(2, c);
		c = c + 1;
		num1 = num1 / 10;
	}
	itoa(num3, hen, 10);
	den = strlen(hen);
	while (d != den) {
		num4 = num3 % 10;
		pa = pa + num4 * pow(2, d);
		d = d + 1;
		num3 = num3 / 10;
	}
	sum=da+pa;
    x=sum;
    while(x!=0){
            y=x%2;
            itoa(y,store,10);
            strcat(data,store);
            x=x/2;
            }
            printf("\n");
            printf("The Binary Sum of the provided two Binary Numbers is: %s",strrev(data));
            printf("\n");


	return 0;
}


