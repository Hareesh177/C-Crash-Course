//pattern 5 program

#include <stdio.h>

int main()
{
    int n=5;
    int i,j,x=1,y=n*2-1;
    for(i=1;i<=n;i++){ //rows
        for(j=1;j<=n*2-1;j++){ // columns
            if(j>x&&j<y)
            printf(" ");
            else
            printf("*");
        }
        x++;
        y--;
        printf("\n"); // new line after completing one iteration.
    }

    return 0;
}
