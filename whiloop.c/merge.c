/*
Write a program in C to merge two arrays into a single array and
sort the resulting array in ascending order.
sample input=4   //(Enter the number of elements in the first array)
1 2 3 4          //(Enter %d elements for the first array)
5                //(Enter the number of elements in the second array:)
1 5 6 7 8        //(Enter %d elements for the Second array)
samle output=Sorted merged array=1 1 2 3 4 5 6 7 8

*/
#include<stdio.h>

void main(){
    int n,k,i,j,m;
    printf("enter n:");
    scanf("%d",&n);
     int a[n],c[n+m];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
        
    }
    printf("enter m:");
    scanf("%d",&m);
    int b[m];
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
        c[i]=b[j];
        i++;
        
    }
    for(i=0;i<n+m;i++){
       for(j=i+1;j<n+m;j++){
           if(c[i]>c[j]){
               k=c[i];
               c[i]=c[j];
               c[j]=k;
           }
       }
    }
    printf("Sorted merged array=");
for(i=0;i<n+m;i++){
    printf("%d ",c[i]);
}

    
}
