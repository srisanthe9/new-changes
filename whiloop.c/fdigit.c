/*

Write a program to print last digit of a number 
    
Sample Input:
Enter any number: 453                                                           
 
Sample Output:
First digit = 4

*/
#include<stdio.h>
 void main(){
     int n;
     printf("Enter any number:");
     scanf("%d",&n);
     while(n>10){n=n/10;}
     printf("First digit = %d",n);
 }

