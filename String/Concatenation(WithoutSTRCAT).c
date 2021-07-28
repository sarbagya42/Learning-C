#include <stdio.h>
#include <string.h>

int main()
{
  char str1[10];
  char str2[10];
  int c=0,d=0,m,k=0;
printf("Type first string:");
gets(str1);
printf("Type second string:");
gets(str2);
while(str1[c]!='\0')
{
    c=c+1;
}
while(str2[d]!='\0')
{
    d=d+1;
}
m=c;
while(m!=(c+d))
{
    str1[m]=str2[k];
    k=k+1;
    m=m+1;
}
puts(str1);
return 0;
}
