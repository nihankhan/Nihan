#include <stdio.h>

int main()
{
   int i, n1, n2, max, LCM;
   
   scanf("%d %d", &n1, &n2);
   
   max = (n1 > n2) ? n1 : n2;
   
   i = max;
   
   while(1)
   {
      if(i % n1 == 0 && i % n2 == 0)
      {
         LCM = i;
         break;
      }
      
      i += max;
   }
   
   printf("LCM is: %d\n", LCM);
   
   return 0;
}
