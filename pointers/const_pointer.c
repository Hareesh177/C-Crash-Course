//constant pointer

#include <stdio.h>

int main()
{
    int a=20,b=30;
    int *const p=&a;//p is a constant pointer to an integer
    //p=&b;//error
    *p=40;//correct
    printf("%d",a);//20
    return 0;
}

/* int *const p
   p is a constant pointer to an integer.here pointer is constant,so we can't change the address. We can change value.*/

