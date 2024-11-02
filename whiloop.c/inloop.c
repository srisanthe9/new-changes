/* Write a program prints the "Hello World" message five times.
 
Sample Input:
Sample Output:
Hello World                                                                     
Hello World                                                                     
Hello World                                                                     
Hello World                                                                     
Hello World                                                                     
End of loop                                                                     
 
*/
#include<stdio.h>

void main(){
    int i=1,n;
    printf("enter value:");
    scanf("%d",&n);
    while(i<=n){
        printf("Hello World\n");
        i++;
    }printf("End of loop");
}