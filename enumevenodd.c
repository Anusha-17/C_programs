#include<stdio.h>
enum check{no,yes}; //no=0 and yes=1
void main()
{
	int num;
	printf("Enter the numebr:");
	scanf("%d",&num);
	int result=fun(num);
	if(result==no)
	printf("ODD\n");
	else
	printf("EVEN\n");
}
int fun(int num)
{
	if(num%2==no)//If it is even it returns yes else no
	return yes;
	else
	return no;
}
