//constants can be changed using pointers but cannot change directly.

#include <stdio.h>

int main()
{
    const int a=20;
    int *p=&a;
    *p=30;
    printf("%d",a);//30

    return 0;
}

