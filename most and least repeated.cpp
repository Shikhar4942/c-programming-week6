#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[100];
int arr[100];
int i,c=0,j,max,min,a=0;
gets(str);
for(i=0;str[i]!='\0'&&str[j]!=NULL;i++)
{
	for(j=0;str[j]!='\0'&&str[j]!=NULL;j++)
	{
		if(str[i]==str[j])
		c++;
	}
	arr[i]=c;
	c=0;
	a++;
}
max=arr[0];
min=arr[0];
for(i=0;i<a-1;i++)
{
	if(max<arr[i])
	max=arr[i];
		if(min>arr[i])
	min=arr[i];
}
for(i=0;str[i]!='\0';i++)
{
	if(max==arr[i])
	{
	printf("%c",str[i]);
	
}
	if(min==arr[i] )
	printf("%c",str[i]);
	
}
}

