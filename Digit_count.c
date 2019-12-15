#include <stdio.h>

int main()
{
   long long int num;
   int count = 0;
   
   printf("Enter any number: ");
   scanf("%lld", &num);
   
   while (num != 0)
   {
      count++;
      
      num /= 10;
   }
   
   printf("Total digits: %d\n", count);
   
   return 0;
}
