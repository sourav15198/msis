#include <stdio.h>
 
int main()
{
 
   int rad;
   float Pi = 3.14, area, ci;
 
   printf("\n Enter radius of circle: ", &rad);
   scanf("%d", &rad);
 
   area = Pi * rad * rad;
   printf("\n Area of circle : %f ", area);
 
   ci = 2 * Pi * rad;
   printf("\n Circumference : %f ", ci);
 
   return 0;
}
