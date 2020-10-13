#include<stdio.h>
int main()
{
int n=55;
int a=0;
int b=1;
if (n==a||n==b) return 0;
int c = a+b;
while(c<=n)
{
if (c==n) return 0;
a=b;
b=c;
c=a+b;
printf(" the fibonacci series is :%d",c);
}
return 0;
}
