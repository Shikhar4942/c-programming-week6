#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[100];
int i;
	
		scanf("%[^\n]s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u')
		{
			printf("%c\n",str[i]);
		
		}
	}
}

