#include <stdio.h>
int main()
{
double kph,mps;
printf("enter the velocity in kilometerper hour:\n");
scanf("%lf",&kph);

mps=kph*0.2777778;

printf("velocity in meter per seconds is %f",mps);

return 0;
}
