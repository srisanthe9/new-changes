/*write a c program to Reverse a Number using while loop

sample input output:
input=298 
output=892                                                                                                
*/
#include<stdio.h>

void main(){
    int n,a;
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
}