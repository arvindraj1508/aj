#include<stdio.h>
int main()
{
  int i,n;
   printf("enter the value of n:");
     scanf("%d",&n);
  for(i=2;i<=n;i++)
  if(n%i==0){
  printf("the value is not prime");
   scanf("%d",&n);}
  else
     scanf("%d",&n);
  printf("the value is prime number");
           
  return 0;
  }

