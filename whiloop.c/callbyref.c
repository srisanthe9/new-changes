#include<stdio.h>
int func(int*ptr1,int*ptr2);
int main(){int x=10;
int y=20;
func(&x,&y);
printf("x=%d and y=%d",x,y);

}
int func(int *ptr1,int *ptr2){

    *ptr1=20;
    *ptr2=10;

}
