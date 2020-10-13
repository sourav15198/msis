#include<stdio.h>
void main()
{
int num,binary_val,decimal_val=0,base=1,rem;
printf("enter a binary number(1s and 0s)\n");
scanf("%d", &num);
binary_val=num;
while(num>0)
{
rem=num%10;
decimal_val = decimal_val + base *rem;
num=num/10;
base=base*2;
}
printf("the binary number = %d\n",binary_val);
printf("its decimal equivalent = %d\n",decimal_val);


}

