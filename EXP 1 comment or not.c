#include<stdio.h>
#include<string.h>
int main()
{
	int i,a;
	char b[30];
	printf("enter the string=");
	scanf("%s",&b);
	for(i=0;i<strlen(b);i++)
	{
		if(b[0]=='/' &&b[1]=='/')
		{
			printf("it is comment");
			a=1;
			break;
		}
		else
		{
			printf("it is not comment");
			a=1;
			break;
		}
	}
}
