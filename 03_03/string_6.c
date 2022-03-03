//6.string 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrlen(char ch[])
{
	int i=0;
	while(ch[i]!='\0')
	{
	    i++;
	}
	return i;
}
int main()
{
	char s1[]="HareeshEdiga";
	int i;
	printf("the char of string:\n");
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c \t",s1[i]);
	}
	printf("\nThe string is: %s",s1);
	printf("\nAddress of string:\n");
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%p\n",&s1[i]);
	}
	printf("length of string: %ld\n",strlen(s1));
	printf("length of string in function: %d\n",mystrlen(s1));
	return 0;
}
