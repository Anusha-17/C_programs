#include<stdio.h>
int main()
{
  	int number, i;
  	printf("\n Please Enter any Integer Value  : ");
  	scanf("%d",&number);
  	printf("\n List of Natural Numbers from 1 to %d are \n",number);  	
	for(i = 1;i <= number;i++)
  	{
    	printf(" %d \t",i);
  	}
  	return 0;
}
