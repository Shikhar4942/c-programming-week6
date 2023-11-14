#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[100];
int i,c=0;
gets(str);
for(i=0;str[i]!='\0';i++)
{
	if(str[i]>=65 && str[i]<=90)
	{
	printf("%c",str[i]);
	break;
}
}
}
