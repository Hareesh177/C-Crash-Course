//find largest element in an array

#include <stdio.h>

int main()
{
    int arr[]={25,11,7,75,56};  // declaration and initialization
    int n=sizeof(arr)/sizeof(arr[0]);  // size of array
    int i, largest;
    largest = arr[0];       //assigning first element in an array to largest 
    for(i=0;i<n;i++){ 
        
        // compare array elements with largest, if the condition is true, swap element to largest
        
        if(arr[i]>largest)  
        largest=arr[i];
    }
    printf("the largest number is %d ",largest); // printing the largest element

    return 0;
}

