// Pattern 6 program

#include<stdio.h>
int main(){
    int n=9,i,j,x=1,y=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((j>=x&&j<=y)||(j<=x&&j>=y))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        x++;
        y--;
    }
}
