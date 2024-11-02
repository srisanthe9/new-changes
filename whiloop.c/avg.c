/* 
Write a program to Calculate the average of n numbers. Use a while loop to take inputs from user and calculate the Average.

Hint: average=total/n
    
Sample Input: Total number of Values: 6                                                      
Enter number 1: 4                                                            
Enter number 2: 5                                                               
Enter number 3: 3                                                              
Enter number 4: 2                                                             
Enter number 5: 7                                                            
Enter number 6: 8

Sample Output:
The average of the 6 numbers is: 4.83 
*/
#include<stdio.h>

void main(){
    int n,b,i=1,sum=0;
    printf("Total number of Values:");
    scanf("%d",&n);
    while(i<=n){printf("Enter number %d:",i);
        scanf("%d",&b);
        sum=sum+b;
        i++;
    }
    float avg=(float)sum/n;
    printf("The average of the %d numbers is:%.2f",n,avg);
}
