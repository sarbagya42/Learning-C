#include<stdio.h>
#include <string.h>
int main()
{
    int c=0,location;
    char source[100];
    char find[50];
    char store[100];
    int i=0,j,k;
    printf("\nType Source String:\n");
    gets(source);
    printf("Type the word to be found:");
    gets(find);
    while(source[i]!='\0')
    {
        if(source[i]==find[0])
        {
          location=i;
          for(j=0; j<strlen(find); j++)
          {
            if(source[i]==find[j])
            {
                c++;
                i++;
            }
        }
        }
        if(c==strlen(find))
        {
            printf("\n\n%s found at position %d\n\n",find,location+1);
            return 0;
        }
        else
        {
        c=0;
        i++;
        }
      }
printf("\nRequested Word Not Found in the string.\n");
return 0;
}





