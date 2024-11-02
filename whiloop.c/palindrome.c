/*
Problem: Write a program to check if a number is a palindrome using a while loop.
input = 121 
output = 121 is a palindrome.
input = 123 
output = 123 is not a palindrome.
*/
#include<stdio.h>
#include<math.h>

void main(){
    int n,rem,sum=0,a,b,nd=0;
    scanf("%d",&n);
    a=n;
    b=n;
    while(n>0){
        n=n/10;
        nd++;
    }
    nd--;
    while(a>0){
        rem=a%10;
        sum=sum+(rem*pow(10,nd));
        nd--;
        a=a/10;
        
    }if(sum==b){printf("%d is a palindrome",b);}
    else{printf("%d is not a palindrome",b);}