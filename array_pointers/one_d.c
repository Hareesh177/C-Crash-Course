//C program to access one dimensional array using pointer.

#include <stdio.h>

#define COLS 5


int main()
{
    int arr[COLS];
    int i;
    printf("Enter the elements of 1-D array:\n\n");
    for(i = 0; i < COLS; i++)
    {
        scanf("%d", (arr + i));
    }
    printf("Displaying the elements of 1-D array:\n\n");
    for (i = 0; i < COLS; i++)
    {
        printf("%d ", *(arr + i) );
    }
    return 0;
}

