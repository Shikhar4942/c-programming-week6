#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100];
int i,c=0;
	for(i=0;i<2;i++)
	{
	
		scanf("%[^\n]s",str);
		//fflush(stdin);
	}
    for(i=0;str[i]!=32;i++)
    {
    	if(i==0)
    	str[i]=str[i]-32;
    	else
    	str[i]=str[i];
    	c++;
	}
	for(i=c+1;str[i]!='\0';i++)
	{
		if(i==c+1)
    	str[i]=str[i]-32;
    	else
    	str[i]=str[i];
    
	}
	printf("%s",str);
}
