//pattern 3 program

#include <stdio.h>

int main()
{
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    int i,j;
    for(i=n-1;i>=0;i--){ //rows
        for(j=0;j<=i;j++){ // columns
            printf("*");
        }
        printf("\n"); // new line after completing one iteration.
    }

    return 0;
}
