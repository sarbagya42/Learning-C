#include <stdio.h>
#include <string.h>

int main() {
  char str1[10];
  char rev1[10];
  int b,k=0;
  printf("Type Name:");
  gets(str1);
  b=strlen(str1);
  while(str1[k]!='\0')
  {
      rev1[k]=str1[b-1];
      b=b-1;
      k=k+1;
  }
if(strcmp(rev1,str1)==0)
{
    printf("Palindrome");
}
else
{
    printf("Not Palindrome.");
}

return 0;
}
