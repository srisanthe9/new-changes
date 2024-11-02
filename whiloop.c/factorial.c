/* write a c program to Find Factorial of a Number by using while loop 
 sample input output:
 
input=3
output=6
*/
#include<stdio.h>

void main(){
    int n,pro=1;
    printf("enter n:");
    scanf("%d",&n);
    while(n>0){
        pro=pro*n;
        n--;
    }printf("%d",pro);
    
}