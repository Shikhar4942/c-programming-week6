#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[100];
int arr[100];
int i,c=0,j;
gets(str);
for(i=0;str[i]!='\0';i++)
{
	for(j=0;str[j]!='\0';j++)
	{
		if(str[i]==str[j])
		c++;
	}
	arr[i]=c;
	c=0;

}
for(i=0;str[i]!='\0';i++)
printf("%d",arr[i]);
}
