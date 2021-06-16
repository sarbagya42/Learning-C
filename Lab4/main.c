#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Armstrong in range n1,n2
int main()
{
  int n1,n2,i,b,c=0,m;
  int k; //length
  char leng[10];
  printf("Type the range:");
  scanf("%d %d",&n1,&n2);
  printf("The Armstrong Numbers in the range %d and %d are:",n1,n2);
  for(i=n1; i<=n2; i++)
  {
        m=i;
        itoa(i,leng,10);
        k=strlen(leng);
    while(m!=0)
    {
        b=m%10;
        c=c+pow(b,k);
        m=m/10;
  }
if(c==i){
    printf("\n%d\n",i);
  }
c=0;
  }
return 0;
}
