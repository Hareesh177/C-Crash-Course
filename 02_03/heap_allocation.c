// Dynamic memory allocation using malloc/calloc

#include <stdio.h>
#include <stdlib.h>

void use_malloc()
{
    int *ptr,i,n=10;
    ptr=(int *)malloc(n*sizeof(int));
    //Assigning data to all elements
    printf("Enter the data : ");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    //The Address of all elements from first to last :
    printf("\nThe Address of all elements from first to last : ");
    for(i=0;i<n;i++){
        printf("%p ",(ptr+i));
    }
    //The data of all elements from first to last : 
    printf("\n\nThe data of all elements from first to last : ");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    //The data of all elements from last to first : 
    printf("\n\nThe data of all elements from last to first : ");
    for(i=n-1;i>=0;i--){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    ptr=NULL;
}

void use_calloc()
{
    int *ptr,i,n=10;
    ptr=(int *)calloc(n,sizeof(int));
    //Assigning data to all elements
    printf("Enter the data : ");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    //The Address of all elements from first to last :
    printf("\nThe Address of all elements from first to last : ");
    for(i=0;i<n;i++){
        printf("%p ",(ptr+i));
    }
    //The data of all elements from first to last : 
    printf("\n\nThe data of all elements from first to last : ");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    //The data of all elements from last to first : 
    printf("\n\nThe data of all elements from last to first : ");
    for(i=n-1;i>=0;i--){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    ptr=NULL;
}

int main(){
    int choice;
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Calling use_malloc function:\n");
        use_malloc();
        break;
        case 2:
        printf("Calling use_calloc function:\n");
        use_calloc();
        break;
        default:
        printf("Default calling use_malloc function:\n");
        use_malloc();
    }
    return 0;
}
