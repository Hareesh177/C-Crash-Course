//find largest element in an array

#include <stdio.h>

int main()
{
    int arr[]={25,11,15,5,6,9,8};  // declaration and initialization
    int n=sizeof(arr)/sizeof(arr[0]);  // size of array
    int i, largest=0,second=0,third=0;
    for(i=0;i<n;i++){ 
        
        // compare array elements with largest, if the condition is true, swap element to largest
        
        if(arr[i]>largest){
            third=second;
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second ){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third ){
            third=arr[i];
        }
    }// printing the largest element
    printf(" 1st largest number is %d\n 2nd largest number is %d\n 3rd largest number is %d\n",largest,second,third); 

    return 0;
}

