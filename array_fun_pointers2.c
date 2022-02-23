//array of function pointers

#include <stdio.h>

int add(int x,int y){
    int z=x+y;
    return z;
}

int sub(int x,int y){
    int z=x-y;
    return z;
}

int mul(int x,int y){
    int z=x*y;
    return z;
}

int (*fun[])(int,int)={add,sub,mul};

int main()
{
    int a,b;
    printf("enter the a and b values: ");
    scanf("%d %d",&a,&b);
    int choice;
    printf("enter the choice: ");
    scanf("%d",&choice);
    if((choice>=0)&&(choice<=2)){
        printf("%d\n",fun[choice](a,b));
    }
    else{
        printf("invalid (because we have only 3 functions i.e from 0-2)");
    }

    return 0;
}

