
// second largest number in an array

#include <stdio.h>
#define SIZE 100

int main() {
    int arr[SIZE];
    const int size;
    printf("enter the array size (1-100): ");
    scanf("%d",&size);
    int i,first=0,second=0;
    printf("enter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]<first){
            second=arr[i];
        }
    }
    printf("Second Largest Number: %d\n",second);
    
    return 0;
}
