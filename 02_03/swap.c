//Swapping

#include<stdio.h>

void swap_1(int a,int b){// with use of temp variable to Swapping
    int temp;// a=10 , b=20
    temp=a;// temp = 10
    a=b;  // a= 20
    b=temp; // b= 10
    printf("After Swapping with temp variable a = %d and b = %d\n\n",a,b);
}

void swap_2(int a,int b){// without use of temp variable to Swapping
    a=a+b;//a=10,b=20, a+b=30 => a=30 
    b=a-b;//b=10(30-20)
    a=a-b;//a=20(30-10)
    printf("After Swapping without temp variable a = %d and b = %d\n\n",a,b);
}

int main(){
    int a,b;
    printf("Enter the a and b values: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping a = %d and b = %d\n\n",a,b);
    swap_1(a,b);
    swap_2(a,b);
    return 0;
}
