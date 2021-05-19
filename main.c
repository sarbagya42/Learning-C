#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main(void) {
	float num2=30;
	float num1=120.00;
    float b;
	float d;
	char op[10];
	char dp[10];
    b=fmod(num2, 5.0);
    if(b==0 && num1>num2 ){
            d=num1-(num2+0.5);
            sprintf(op,"%.2f",d);
        printf("%s\n",op);
    }else{
        sprintf(dp,"%.2f",num1);
        printf("%s\n",dp);
    }

	return 0;
}

