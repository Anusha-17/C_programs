#include<stdio.h>
#include<string.h>
int mystrlen(char a[10]);
int main()
{
	char a[10]="Welcome";
	printf("\n String is :%s\n",a);
	int i=0,length,len;
	while(a[i]!='\0')
	{
		printf("The character at %d Index position =%c\n",i,a[i]);
		i++;
	}
	printf("\n Address of string :%p\n",a);
	length=strlen(a);
	printf("\n String length is :%d",length);
	len=mystrlen(a);	
	printf("\n Length of given string is %d",len);
	return 0;
}
int mystrlen(char a[10])
{
	int i, len=0;
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	return(len);
}
