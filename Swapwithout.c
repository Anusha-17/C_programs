#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Before swap:\t %d \t %d\n",a,b);
	swap(a,b);
}
swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swap:\t %d \t %d",x,y);
}
