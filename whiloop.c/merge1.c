#include<stdio.h>

void main(){
int a[3]={1,3,5};
int b[3]={7,8,9};
int c[6];
int k=0,i=0,j=0;
while(i<3&&j<3){
    if(a[i]<b[j]){
        c[k]=a[i];
        k++;
        i++;
    }
     if(b[j]<a[i]){
        c[k]=b[j];
        k++;
        j++;
    }
     if(a[i]==b[j]){
        c[k]=a[i];
        i++;
        k++;
    }
   
}
while(i<3){
    c[k]=a[i];
    i++;
    k++;
   
}
while(j<3){
    c[k]=b[j];
    j++;
    k++;
  
}
for(i=0;i<k;i++){
printf("%d ",c[i]);
    
}
}
