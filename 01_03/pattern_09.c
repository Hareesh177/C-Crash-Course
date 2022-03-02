// Pattern 9 program

#include<stdio.h>
int main(){
    int n=5,i,j,x=1,y=n,k=1;
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
