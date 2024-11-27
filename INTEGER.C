#include<stdio.h>
#include<math.h>
int main()
{
 int n=20901;
 int digit=0;
 while(n>0)
 {
  digit ++;
  n=n/10;
  }
  printf("no.of digits=%d",digit);
  }