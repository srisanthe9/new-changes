/* write a C program that calculates the sum of odd numbers between 1 and n using a while loop:
sameple input output:

input=4
output=4

input=5
output=9
*/
#include<stdio.h>

void main(){
    int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            sum=sum+i;}
            i++;
    }printf("%d",sum);
}