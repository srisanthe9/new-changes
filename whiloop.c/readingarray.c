/*C program to read elements into an array and then display them:

sample input output:
Enter the number of elements: 5
Enter 5 elements:
Element 1: 1
Element 2: 2
Element 3: 3
Element 4: 4
Element 5: 5

The elements in the array are:
1 2 3 4 5 
*/
#include<stdio.h>

void main(){
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++){printf("Enter %d:",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n");
    printf("The elements in the array are:");
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}