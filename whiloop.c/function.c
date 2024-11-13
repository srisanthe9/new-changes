#include<stdio.h>
char candy();
 void main()
 {
   char abhi;
    abhi=candy();
    printf("%c",abhi);
    
 }
 char candy()
 {
    char a,b;
    printf("enter a and b");
    scanf("%c%c,&a,&b");
    return a,b;
 }