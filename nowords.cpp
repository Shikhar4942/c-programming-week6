#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[100];
int i,c=0;
gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==32)
		c++;
	}
	printf("%d",c+1);
}
