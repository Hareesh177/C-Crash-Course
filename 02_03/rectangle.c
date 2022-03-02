//Area of rectangle

#include <stdio.h>

int find_area(int len,int width)
{
    int area;
    area= len * width;
    return area;
}

int main()
{
    int l,w;
    printf("Enter the length and width values: ");
    scanf("%d %d",&l,&w);
    printf(" length = %d\n width = %d\n",l,w);
    printf("Area of Rectangle is %d",find_area(l,w));

    return 0;
}

