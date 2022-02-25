//constant pointer to constant integer

#include <stdio.h>

int main()
{
    int a=20,b=30;
    int const *const p=&a;//p is a constant pointer to an integer
    //p=&b;//error
    //*p=40;//error
    printf("%d",a);//20
    return 0;
}

/* int const *const p
   p is a constant pointer to a constant integer.here both pointer and integer are constants.so, we can't change value or the address. */

