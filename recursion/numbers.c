
//printing numbers upto n

#include <stdio.h>

void fun(int n){
    if(n){
        fun(n-1);
        printf("%d ",n);
    }
}
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fun(n);
}

