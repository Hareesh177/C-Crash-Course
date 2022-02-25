#include <stdio.h>

int main()
{
    int i,j,n=5;
    char ch='A';
    for(i=n;i>0;i--){
        for(j=1;j<=n;j++){
            if(j>=i){
            printf("%c",ch);
            ch++;}
            else
            printf(" ");
        }
        ch='A';
        printf("\n");
    }

    return 0;
}
