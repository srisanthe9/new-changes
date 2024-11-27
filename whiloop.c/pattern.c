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
            if(i==0||i==k){ printf("%d ",c);}
            else if(k==1 ){printf("%d ",i);}
            else if(i=k-1){printf("%d ",i);}
            else{printf("%d ",i+k);}
        }
        printf("\n");
    }
}