//pointer to constant integer

#include <stdio.h>

int main()
{
    int a=20,b=30;
    //const int *p=&a;//p is a pointer to an integer constant
    int const *p=&a;//p is a pointer to a constant integer
    p=&b;//corect
    //*p=40;//error
    printf("%d",a);//20
    return 0;
}

/* int const *p
   const int *p   (both are same)*/

