#include<stdio.h>
int main()
{
double kw,j;
int sec;
printf("enter the energy consumption in joules-\n");
scanf("%lf" ,&j);
printf("enter the duration in seconds-\n");
scanf("%d",&sec);
kw=(j/(1000*sec));
printf("power consumption=%lf kw",kw);
return 0;
}
