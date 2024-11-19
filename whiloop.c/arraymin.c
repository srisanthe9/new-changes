/*
C program to find the minimum element in an array:

sample input=5 //Enter the number of elements
23 8 6 1 8     //Enter 5 elements
sample output=The minimum element in the array is= 1
*/
#include<stdio.h>

void main(){
    int n,min,i;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("The minimum element in the array is= %d",min);
    
}