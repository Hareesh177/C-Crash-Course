
#include <stdio.h>
#include<string.h>

void sort_string(char *);

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    sort_string(str);
    printf("the sorted string is = %s",str);

    return 0;
}

void sort_string(char *s)
{
    int i,j,n=strlen(s);
    char temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
