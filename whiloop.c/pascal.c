#include<stdio.h>

void main(){
    int i,j,k,n,c=1;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            if(i==0||k==0){
            printf("%d ",c);}
            else{
                c=c*(i-k+1)/k;
                printf("%d ",c);
            }
        }
        printf("\n");
    }
}