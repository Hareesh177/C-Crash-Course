// pattern 17 program

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter n: ");
    scanf("%d", &n);
    // Prints upper part of the pattern
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    // Print lower part of the pattern
    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
