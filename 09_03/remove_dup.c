#include<stdio.h>

void remove_dup(char *);  // function declaration

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);     // reading the input from user
    remove_dup(str);                  // function calling
    printf("After removing the duplicates, string is %s",str); // printing string 
}

void remove_dup(char *s)
{
    int i,j,k;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            label:
            if(s[i]==s[j])
            {
                for(k=j;s[k]!='\0';k++)
                {
                    s[k]=s[k+1];
                }
                goto label;
            }
        }
    }
}
