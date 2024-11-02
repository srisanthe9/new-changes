/*
Write a program in C to find a number is harshad number or not using while loop taking input from user.

A Harshad number (or Niven number) is an integer that is divisible by the sum of its digits. 

Here is an examples of Harshad numbers:
18:
Sum of digits = 1 + 8 = 9
Since 18 is divisible by 9 (18 ÷ 9 = 2), 18 is a Harshad number.

Sample Input:Enter a number: 123
Sample Output:123 is not a Harshad number.

Sample Input:Enter a number: 21
Sample Output:21 is a Harshad number.


*/
#include<stdio.h>

void main(){
    int n,sum=0,a,b;
    printf("Enter a number:");
    scanf("%d",&n);
    b=n;
    while(n>0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    if(b%sum==0){printf("%d is a Harshad number",b);}
    else{printf("%d is not a Harshad number",b);}
}