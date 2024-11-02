/*write a c program Print reverse multiplication table,using while loop
sample output:
input = 5
output = Enter the number for reverse multiplication table:                           
5 x 10 = 50                                                                     
5 x 9 = 45                                                                      
5 x 8 = 40                                                                      
5 x 7 = 35                                                                      
5 x 6 = 30                                                                      
5 x 5 = 25                                                                      
5 x 4 = 20                                                                      
5 x 3 = 15                                                                      
5 x 2 = 10                                                                      
5 x 1 = 5  
*/
#include<stdio.h>

int main(){
    int i=10,a,pro=1;
    scanf("%d",&a);
    printf("Enter the number for reverse multiplication table:");
while(i>=1){
    pro=a*i;
    printf("\n%d x %d = %d",a,i,pro);
    i--;
} 
return 0;
}