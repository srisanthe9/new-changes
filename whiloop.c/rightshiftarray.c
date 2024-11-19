
#include<stdio.h>

void main(){
    int n,i,k;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter number of elements to be shifted:");
    scanf("%d",&k);
    for(i=n-k;i<n;i++){
        printf("%d ",a[i]);}
        if(i=n){
            for(i=0;i<n-k;i++){
                printf("%d ",a[i]);
            }
        

}
}

