//C program to access two dimensional array using pointer.


#include <stdio.h>

#define ROWS 3
#define COLS 3


int main()
{
    int arr[ROWS][COLS];
    int (*p_arr)[COLS]=arr;
    int i, j;
    printf("Enter the elements of 2-D array:\n");
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            // (*(matrix + i) + j is equivalent to &matrix[i][j]
            scanf("%d", (*(p_arr + i) + j));
        }
    }
    printf("Displaying the elements of 2-D array:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // *(*(matrix + i) + j) is equivalent to matrix[i][j]
            printf("%d ", *(*(p_arr + i) + j));
        }
        printf("\n");
    }
    return 0;
}

