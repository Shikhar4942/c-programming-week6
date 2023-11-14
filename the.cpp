#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[100];
int i,c=0;
	for(i=0;i<2;i++)
	{
	
		scanf("%[^\n]s",str);
		//fflush(stdin);
	}
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e')&&(i+1)<strlen(str))
		c++;
	}
	printf("%d",c);
}
