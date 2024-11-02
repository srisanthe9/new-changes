/*write a c program to find GCD of a number

Sample Input = 45
20
Sample Output = 
enter any two numbers:                                                                                                
GCD of two numbers is:5 
  */
  #include<stdio.h>
  
  void main(){
      int a,b,rem;
      printf("Sample Input =");
      scanf("%d%d",&a,&b);
      while(b!=0){
          rem=a%b;
          a=b;
          b=rem;
      }printf("GCD of two numbers:%d",a);
  }