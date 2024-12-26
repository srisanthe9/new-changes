#include<stdio.h>

int fun(int,int);
int main(){
    int x,y;
    x=10;
    y=20;
fun(x,y);
printf("x=%d and y=%d",x,y);

}
int fun(int x,int y){
    x=20;
    y=10;
}