// method 2: second largest number in array

#include <stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE];
    const int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int i,j,second=0;
    printf("\nEnter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(a[i]<a[j]){
                a[i]^=a[j]^=a[i]^=a[j];
            }
        }
    }
    second=a[1];
    printf("Second largest number is %d\n",second);
    return 0;
}

