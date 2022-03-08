#include <stdio.h>
#include <stdlib.h>
enum check{Yes,No};
enum check str_s(char *str1,int size,char c)
{
    enum check s;
    int i,j=0;
    for(i=0;i<size;i++)
    {
        if(str1[i]==c)
        {
            j=1;
            s=Yes;
            break;
        }
    }
        if(s==Yes)
        {
            return Yes;
        }
        else
        {
            return No;
        }
    }
    
int main()
{
   char c,s;
   enum check y;
   int n,size;
   char* str;
   printf("Enter the number of characters:");
   scanf("%d",&n);
   str=(char*)malloc(sizeof(char)*size);
   printf("Enter the string:");
   scanf("%s",str);
   printf("Enter the character to search:");
   scanf("%s",&c);
   s=str_s(str,size,c);
   if(s==0)
   {
       printf("Yes");
   }
   else if(s==1)
   {
       printf("No");
   }
}
