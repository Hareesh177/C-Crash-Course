//pattern 7 program

#include <stdio.h>

int main()
{
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){ //rows
        for(j=0;j<n;j++){ // columns
            printf("*");
        }
        printf("\n"); // new line after completing one iteration.
    }

    return 0;
}
