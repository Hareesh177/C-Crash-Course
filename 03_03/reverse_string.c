//9.string reverse
#include<stdio.h>
#include<string.h>

void reverse(char s[])
{
	int i,n;
	char ch;
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		ch=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=ch;
	}
}

int main()
{
	char str[50];
	printf("enter a string: ");
	fgets(str,50,stdin);
	printf("\nbefore reverse of string : %s",str);
	reverse(str);
	printf("\nafter reverse of string : %s ",str);
}
