#include<stdio.h>
int main()
{
	int l,w;
	printf("Enter the length:");
	scanf("%d",&l);
	printf("Enter the width:");
	scanf("%d",&w);
	find_area(l,w);
	printf("Area of rectangle: %d",l*w);
}
int find_area(int l,int w)
{
	int area=l*w;
	printf("Area of rectangle: %d",area);
	return 0;
}
