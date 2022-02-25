#include<stdio.h>
int main()
{
    int array[2][2][2]={1,2,3,4,5,6,7,8};
    int *p;
    p=&array[0][0][0];
    int i,j,k;
    
    /*Accessing data using pointers*/
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d ",*p);
                p++;
            }
            printf("\n");
        }
        printf("\n");
    }

  return 0;
}
