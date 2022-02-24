//free() and dangling pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *ptr=malloc(4);
   *ptr=20;
   printf("%d %p\n",*ptr,ptr);
   free(ptr);
   printf("%d  %p\n",*ptr,ptr);
   //ptr=NULL;
   //printf("%d %p\n",*ptr,ptr);

    return 0;
}


/* free() is used to deallocate memory for an already allocated space.

If memory is allocated for a pointer and deallocate it, the pointer will be still
pointing to the same memory location instead of null. this is called dangling pointer.

soln for dangling pointer:

after deallocation of memory, the pointer should be assigned to null.
this is the soln for dangling pointer. */
