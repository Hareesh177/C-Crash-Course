//checking an array of 10 char - if they are vowels - printing elements, their position and address

#include<stdio.h>

void main(){
    char arr[10]="HAReeshEdi";
    int i=0,lower,upper;
    while(i<10){
        lower=(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u');
        upper=(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U');
        if(lower||upper){
            printf("Element is %c, Position is %d, Address is %p \n",arr[i],i+1,&arr[i]);
        }
        i++;
    }
}
