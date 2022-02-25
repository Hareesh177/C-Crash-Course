//C program to access three dimensional array using pointer.


#include <stdio.h>

#define BLOCK 2
#define ROWS 3
#define COLS 3


int main()
{
    int arr[BLOCK][ROWS][COLS];
    int (*p_arr)[ROWS][COLS]=arr;
    int i, j,k;
    printf("Enter the elements of 3-D array:\n");
    for(k = 0 ; k < BLOCK; k++)
    {
        for(i = 0; i < ROWS; i++)
        {
            for(j = 0; j < COLS; j++)
            {
                
                scanf("%d",(*(*(p_arr + k) + i)+j));
            }
            
        }
    }
    printf("Displaying the elements of 3-D array:\n");
    for(k = 0 ; k < BLOCK; k++)
    {
        for(i = 0; i < ROWS; i++)
        {
            for(j = 0; j < COLS; j++)
            {
                scanf("%d ",*(*(*(p_arr + k) + i)+j));
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}
