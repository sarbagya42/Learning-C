#include <stdio.h>
#include <stdlib.h>
int main() {
	int c = 0,d=0,pen,den,num1,num2,num3,num4,len,da=0,pa=0,length[10],x,y,diff,a,b;
    char fin,store[10],data[10],hen[10];
	printf("Type any Binary Number:");
	scanf("%d", &num1);
	a=num1;
	printf("Type any Binary Number:");
	scanf("%d", &num3);
	b=num3;
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
	if(da>pa){
        printf("Since first number is greater then the second %d - %d =",a,b);
        diff=da-pa;
        }else{
            printf("Since second number is greater than the first %d - %d=",b,a);
            diff=pa-da;
        }
    x=diff;
    while(x!=0){
            y=x%2;
            itoa(y,store,10);
            strcat(data,store);
            x=x/2;
            }
            printf("%s",strrev(data));
            printf("\n");
	return 0;
}


