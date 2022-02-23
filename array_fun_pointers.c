
//array of function pointers

#include <stdio.h>

void fun1()
{
   int x,y,z;
   printf("\nenter the values: ");
   scanf("%d %d",&x,&y);
   z=x+y;
   printf("\nThe addition of %d and %d is :%d",x,y,z);
}

void fun2()
{
    int x,y,z;
    printf("\nenter the values: ");
    scanf("%d %d",&x,&y);
    z=x-y;
    printf("\nThe subtraction of %d and %d is :%d",x,y,z);
}

void fun3()
{
    int x,y,z;
    printf("\nenter the values: ");
    scanf("%d %d",&x,&y);
    z=x*y;
    printf("\nThe Multiplication of %d and %d is : %d",x,y,z);
}

void (*func_ptr[])() = {fun1, fun2, fun3};

int main()
{
    int option;

    printf("\nEnter function number you want: ");
    printf("\nYou should not enter other than 0 , 1, 2: "); /* because we have only 3 functions */
    scanf("%d",&option);

    if((option>=0)&&(option<=2))
    { 
        (func_ptr[option])();
    }
    else{
        printf("Invalid option");
    }

    return 0;
}
