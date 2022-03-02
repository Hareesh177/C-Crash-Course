//Fibonacci Series without recursion

#include <stdio.h>

// function defination

void fibonacci(int n){   
    int n1=0,n2=1,n3,i;
    for(i=0;i<n;i++){     // this loop start printing from 3rd number onwards because 2 numbers are already printed
        n3=n1+n2;        // logic for Fibonacci number, 3rd number is the sum of the previous two numbers;
        printf("%d ",n3); 
        n1=n2;           // assigning two latest previous numbers to n1 and n2
        n2=n3;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Fibonacci Series: %d %d ",0,1); // first two numbers in Fibonacci series is always 0 and 1
    fibonacci(n-2);// n-2 because 2 numbers are already printed and calling the function
    return 0;
}

