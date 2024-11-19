/*
Write a program to Find the Maximum Element in an Array

sample input=5  //Enter the number of elements
1 2 3 4 5       //Enter 5 elements 
sample output=The maximum element in the array is =5
*/
#include<stdio.h>

void main(){
    int n,max,i;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
       if(max<a[i]){max=a[i];
    }
    }
    printf("The maximum element in the array is =%d",max);
}