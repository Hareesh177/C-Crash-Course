//4.Find the second largest element in a array - use fns passing array as parameter  / macros 

#include<stdio.h>
// function declaration

int second_largest(int b[],int n); // passing array as parameter to function

int main()
{
    int a[]={10,20,30,40,65,50,85,25,35,45};
    int x,size=sizeof(a)/sizeof(a[0]);
    x=second_largest(a,size);    // calling function and assigning function to x
    printf("Second largest number is %d",x);
    return 0;
}
//function defination

int second_largest(int b[],int n)
{
    // logic for second largest number
    int i,lar=0,sec=0;
    for(i=0;i<n;i++){
        if(b[i]>lar){   // comparing array element with largest , if condition is true
            sec=lar;    // moving largest number to second largest and
            lar=b[i];   // moving array element to largest
        }
        else if(b[i]>sec){  // if array element is greater than second largest
            sec=b[i];       // moving array element to second largest
        }
    }
    return sec;
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
sec_largest.c [unix] (05:29 01/01/1970)                                                                                                                                                                    0,1 All
-- INSERT --

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
sec_largest.c [unix] (05:29 01/01/1970)                                                                                                                                                                    0,1 All
-- INSERT --

