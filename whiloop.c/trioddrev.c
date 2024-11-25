#include<stdio.h>

void main()
{
    int i,j,k,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=2*n-i;k++){
            printf("* ");
        }
        printf("\n");
    }
}