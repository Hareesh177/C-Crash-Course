
//extract number

#include <stdio.h>

void extract_no(int n){
    if(n>0){
        extract_no(n/10);
        printf("%d",n%10);
    }
}
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    extract_no(n);
}

