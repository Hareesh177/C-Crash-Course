//5.Reverse an array and print the values - use fns passing array as parameter  / macros

#include <stdio.h>

void Reverse(int b[],int n);  // function declaration

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);
    printf("Reverse of an array is: ");
    Reverse(a,size);      // function calling
    return 0;
}

void Reverse(int b[],int n)    // function defination
{
    int i;
    for(i=n-1;i>=0;i--){
        printf("%d, ",b[i]);
    }
}
