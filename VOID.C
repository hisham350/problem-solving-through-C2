#include<stdio.h>
void foo(void){
int a;
a=10;
printf("Too function variable a a=%d\n",a);
}
{
foo();
printf("Main:variable a=%d\n",a);
return 0;
}
