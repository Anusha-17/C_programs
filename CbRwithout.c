#include<stdio.h>
void main()
{
	int a=10,b=20;
	printf("Before swap:\t %d \t %d\n",a,b);
	swap(&a,&b);
	printf("After swap:\t %d \t %d\n",a,b);
}
swap(int* x,int* y)
{
	*x=*x + *y;
	*y=*x - *y;
	*x=*x - *y;
	printf("After swap:\t %d \t %d\n",*x,*y);
}