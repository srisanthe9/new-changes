#include<stdio.h>
void main(){
    int day,mon,yr,moncod,yrcod,l,leftyr,nolpyr,n;
    printf("Enter dob:");
scanf("%d%d%d",&day,&mon,&yr);
int a[12]={1,4,4,0,2,5,0,3,6,1,4,6};
int b[9]={0,6,4,2,0,6,4,2,0};
moncod=a[mon-1];
l=yr/100;
leftyr=yr%100;
nolpyr=leftyr/4;
yrcod=b[l-15];
n=(day+moncod+yrcod+nolpyr+leftyr)%7;
if(n==1){printf("Sunday");}
if(n==2){printf("Monday");}
if(n==3){printf("Tuesday");}
if(n==4){printf("Wedday");}
if(n==5){printf("Thursday");}
if(n==6){printf("Friday");}
if(n==0){printf("Saturday");}
}