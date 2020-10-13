#include <stdio.h>
int main()
{
int lumens,wat,lumpw;
	printf("enter the power consumption in watt \n");
	scanf("%d",&wat);

	printf("enter the luminous efficiency per watts \n");
	scanf("%d",&lumpw);
lumens=wat*lumpw;
	printf("lumens=%d lumens \n",lumens);

return 0;
}
