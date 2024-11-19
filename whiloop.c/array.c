#include <stdio.h>

void main() {
    int n,i,sum=0;
    
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    
}