#include<stdio.h>
void main()
{
char ch;
label:
printf("enter any character: ");
scanf("%c",&ch);
if (isalpha(ch))
	{
	if (isupper(ch))
		{
		printf("after case change:%c\n",ch+32);
		}
	else
		{
		printf("after case change:%c\n",ch-32);
		}
	}
else
	{
	printf("given no is not an alphabet...\n");
goto label;
	}
}
