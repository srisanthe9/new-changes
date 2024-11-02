/*write a c program to Check if a number is prime, using while loop

sample output:

input = 4
output = Enter a number:                                                               
4 is not a prime number.

*/

#include<stdio.h>

void main(){
    int i=2,n;
    scanf("%d",&n);
    printf("Enter a number:");
    while(i<n){
        if(n%i==0){break;}
        i++;
    }
    if(i==n){printf("%d is a prime number",n);}
    else{printf("%d is not a prime number",n);}
}
