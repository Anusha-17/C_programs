#include<stdio.h>
int main()
{
	int n,r;
	printf("Enter a number:");
	scanf("%d",&n);
	r=reverse(n);
	if(r==n)
	printf("Number is palindrome");
	else
	printf("Number is not palinderome");
}
int reverse(int n)
{
	int rem,rev=0;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	return(rev);
}
