//C program to access two dimensional array using pointer.


#include <stdio.h>

#define ROWS 3
#define COLS 3


int main()
{
    int arr[ROWS][COLS];
    int i, j;
    printf("Enter the elements of 2-D array:\n\n");
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            // (*(arr + i) + j is equivalent to &arr[i][j]
            scanf("%d", (*(arr + i) + j));
        }
    }
    printf("Displaying the elements of 2-D array:\n\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // *(*(arr + i) + j) is equivalent to arr[i][j]
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    return 0;
}
