//3.Sort  an array of 10 integers in decreasing order 

#include <stdio.h>

void sort(int b[],int n);  // function declaration

int main()
{
    int a[]={11,7,9,12,16,3,19,21,5,8};
    int size=sizeof(a)/sizeof(a[0]);
    printf("Decreasing order of an array is: ");
    sort(a,size);      // function calling
    return 0;
}

void sort(int b[],int n)    // function defination
{
    int i,j,k;             // bubble sort 
    k=n-1;                // k is used to move upto last element
    for(i=0;i<n-1;i++){
        for(j=0;j<k;j++){
            if(b[j]<b[j+1])  // comparing the alternate elements , if condition is true
            b[j]^=b[j+1]^=b[j]^=b[j+1]; // swap the alternate elements
        }            // for each iteration smallest number get in last position and
        k--;        //k is decreased by 1 because we already got last element,so again we don't need to check that element
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
