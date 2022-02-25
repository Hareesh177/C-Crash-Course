//C program to access one dimensional array using pointer.

#include <stdio.h>

#define COLS 5


int main()
{
    int arr[COLS];
    int *p_arr=arr;
    int i;
    
    
    printf("Enter the elements of 1-D array:\n\n");
    for(i = 0; i < COLS; i++)
    {
        scanf("%d", (p_arr + i));
    }
    
    printf("Displaying the elements of 1-D array:\n\n");
    for (i = 0; i < COLS; i++)
    {
        printf("%d ", *(p_arr + i) );
    }
    return 0;
}

