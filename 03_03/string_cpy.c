// copy string

#include<stdio.h>

void mystrcpy(char d[],char s[]);//declaration
int main()
{
 char d[20] ,s[10];
 printf("enter the string :\n");
 scanf("%s %s",s,d);
 printf("\nbefore coping string, source = %s and destination = %s",s,d);
 mystrcpy(d,s);//calling
 printf("\nafter coping string, source = %s and destination = %s",s,d);
}
void mystrcpy(char d[],char s[])//defination
{
    int i=0;
    while(s[i]!='\0')
    {
        d[i]=s[i];
        i++;
    }
    d[i]='\0';
}
