/*write a c program to print Fibonacci Series using while loop 
sample input output:
case=1
input=3                                                                                                
ouput=
0 1 1       
*/
#include<stdio.h>

 void main(){
     int p=0,c=1,n,i=1,sum=0;
     printf("enter number:");
     scanf("%d",&n);
     printf("%d %d",p,c);
     sum=p+c;
    
     while(i<=n-2){

     printf("%d",sum);
     p=c;
     c=sum;
     sum=p+c;
     i++;
     }
 }
   