#include <stdio.h>

int main()
{
   int start, end, i;
   
   printf("Enter lower limit:");
   scanf("%d", &start);
   
   printf("Enter upper limit:");
   scanf("%d", &end);
   
   if(start % 2 == 0)
   {
      start++;
   }
   
   for(i = start; i <= end; i += 2)
   {
      printf("%d\n", i);
   }
   
   return 0;
}
