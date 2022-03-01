//pattern 2 program

#include <stdio.h>

int main()
{
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    int i,j;
    for(i=n-1;i>=0;i--){ //rows
        for(j=0;j<n;j++){ // columns
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n"); // new line after completing one iteration.
    }

    return 0;
}
