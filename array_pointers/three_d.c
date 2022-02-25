//C program to access three dimensional array using pointer.

#include<stdio.h>
int main () {
  int A[2] [3] [3] = { { {1,2,3}, { 4 ,5,6 }, {7,8, 9} }, { { 11,12,13 }, { 14, 15,16 }, { 17,18,19 } } } ;
  int(*pA) [3] [3] =A ;
  int i, j, k;
  printf("The elements of 3D array are given below.\n\n");
  for ( i =0; i<2; i++) { 
    for ( j =0; j <3; j++) {
      for ( k =0; k<3; k++)
        printf("%d  ", *(*(*(pA +i) + j) +k));
        printf ("\n");
    } 
    printf("\n \n");
  }
   return 0;
}
