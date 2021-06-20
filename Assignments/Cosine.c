#include <stdio.h>
#include <math.h>
#define Pi 3.1415926535
//cosine series:
int main()
{
  double x,n,rad,p,temp,fact=1,store=0;
  int c=2,i;
  printf("Type the value of x in Degrees:");
  scanf("%lf",&x);
  printf("Type the value of n:");
  scanf("%lf",&n);
  rad=(x*Pi)/180;
  p=1-(pow(rad,2)/2);
  for(i=4; i!=(n*2); i=i+2){
      temp=i;
        while(temp>0){
            fact=fact*temp;
            temp=temp-1;
            }
       if(c%2==0){
            p=p+((pow(rad,i))/fact);
            c=c+1;
        }else{
            p=p-((pow(rad,i))/fact);
            c=c+1;
            }
            fact=1;
  }
  printf("cos(%.1lf)=%lf",x,p);
return 0;
}
