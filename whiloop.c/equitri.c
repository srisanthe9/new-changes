#include<stdio.h>

void main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*(n-i);j++){
            printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
        printf("* ");
    }
    printf("\n");
    }
}