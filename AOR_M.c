#include<stdio.h>
#define find_area(l,w) (l*w);
int main()
{
	int l,w,a;
	printf("Enter the length:");
	scanf("%d",&l);
	printf("Enter the width:");
	scanf("%d",&w);
	a=find_area(l,w);
	printf("Area of rectangle: %d",a);
}

