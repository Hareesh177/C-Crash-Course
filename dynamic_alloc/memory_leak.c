//memory leak

#include <stdio.h>
#include <stdlib.h>

void fun(void){
    int *p=malloc(4);
    *p=20;
    printf("%d %p\n",*p,p);
    //free(p);
    //printf("%d \n",*p);
}
void main(){
    fun();
    fun();
    fun();
}

/* If we allocate memory for a variable inside a function and if we don't deallocate it.It causes memory leak

soln for memory leak:

free(p);

the pointer should be deallocated before exiting the function.*/
