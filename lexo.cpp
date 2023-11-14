#include<stdio.h>
#include<string.h>
int main()
{
		
	char str[100],t;
int i,c=0,j;
	for(i=0;i<2;i++)
	{
	
		scanf("%[^\n]s",str);
		//fflush(stdin);
	}
for(j=0;j<strlen(str);j++)
{

	for(i=0;i<strlen(str);i++)
	{
	if(	str[i]<str[i+1])
	{
		t=str[i];
		str[i]=str[i+1];
		str[i+1]=t;
	}
	}
}
	printf("%s",str);
}
