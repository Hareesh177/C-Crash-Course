//to count frequency of string
#include<stdio.h>

int main()
{
    int i,count=0;
    char str[20],ch;
    printf("enter string: ");
    fgets(str,20,stdin);
    printf("enter character from given string : ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        count++;
    }
    printf("\nfrequency of character %c in string is %d times",ch,count);
    printf("\nfrequency of character %c is %d times in string %s",ch,count,str);
    return 0;
}
