/*C program to calculate product of digits of a number?

Sample Input Output:

input=123

output=6

 */
 #include<stdio.h>
 
 void main(){
     int n,a,pro=1;
     printf("enter n:");
     scanf("%d",&n);
     while(n>0){
         a=n%10;
         pro=pro*a;
         n=n/10;
     }
     printf("%d",pro);
 }