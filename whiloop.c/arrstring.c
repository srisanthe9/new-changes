#include<stdio.h>

int main(){ 
    int n,i;
printf("enter n");
    scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
int lowestage=arr[0];
int highestage=arr[0];
for(i=0;i<n;i++){
    if(lowestage>arr[i]){
lowestage=arr[i];}
}
printf("min value is %d",lowestage);
for(i=0;i<n;i++){
if(highestage<arr[i]){
    highestage=arr[i];
    }
    printf("max value is %d",highestage);


}
return 0;



}