#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i,n1;

	printf("Enter number of elements:");
	scanf("%d",&n);

	// Dynamically allocate memory using malloc()
	
	int *ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	
	for (i = 0; i < n; i++) {
		printf("Enter an integer: ");
		scanf("%d",ptr+i);
	}
	//Reallocation of memory using realloc()
	
	printf("Enter number of elements:");
	scanf("%d",&n1);
	ptr = (int*)realloc(ptr,n* sizeof(int));
	
	for (i = n; i < n1; i++) {
		printf("Enter an integer: ");
		scanf("%d",ptr+i);
	}
	
	printf("The elements are : ");
	for (i = 0; i < n1; i++) {
		printf("%d, ", *(ptr+i));
	}

	return 0;
}

