#include<stdio.h>
int power(int x,unsigned int y)
{
if(y==0)
	return 1;
else if(y%2==0)
	return power(x,y/2)*power(x,y/2);
else
	return x*power(x,y/2)*power(x,y/2);
}
int main()
{

int x;
unsigned int y;
printf("enter the valu of x\n");
scanf("%d",&x);
printf("enter the value of power\n");
scanf("%d",&y);
printf("x to the power=%d\n",power(x,y));
return 0;
}
