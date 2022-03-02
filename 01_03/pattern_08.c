// Pattern 8 program

#include<stdio.h>
int main(){
    int n=5,i,j,x=1,y=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n;j++){
            if(j<=i)
            printf(" ");
            else{
            printf("*");
            }
        }
        printf("\n");
    }
}
