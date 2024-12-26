#include<stdio.h>

void main(){
    int n,i,j,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
   
    
    for(i=0;i<n;i++){ 
        for(j=i+1;j<n;j++){if(arr[i]>arr[j]){
            arr[i]=arr[j];
        }

        }
    }

      

    

}