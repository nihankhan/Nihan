#include <stdio.h>
#include <string.h>

int main()
{
   //freopen("in.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
   
   char anim[20];
   
   scanf("%s", anim);
   
   if(strcmp(anim, "vertebrado") == 0)
   {
      scanf("%s", anim);
      
      if(strcmp(anim, "ave") == 0)
      {
         scanf("%s", anim);
         
         if(strcmp(anim, "carnivoro") == 0)
         {
            printf("aguia\n");
         }
         else if(strcmp(anim, "onivoro") == 0)
         {
            printf("pomba\n");
         }
      }
      else if(strcmp(anim, "mamifero") == 0)
      {
         scanf("%s", anim);
         
         if(strcmp(anim, "onivoro") == 0)
         {
            printf("homem\n");
         }
         else if(strcmp(anim, "herbivoro") == 0)
         {
            printf("vaca\n");
         }
      }
   }
   else if(strcmp(anim, "invertebrado") == 0)
   {
      scanf("%s", anim);
      
      if(strcmp(anim, "inseto") == 0)
      {
         scanf("%s", anim);
         
         if(strcmp(anim, "hematofago") == 0)
         {
            printf("pulga\n");
         }
         else if(strcmp(anim, "herbivoro") == 0)
         {
            printf("lagarta\n");
         }
      }
      
      else if(strcmp(anim, "anelideo") == 0)
      {
         scanf("%s", anim);
         
         if(strcmp(anim, "hematofago") == 0)
         {
            printf("sanguessuga\n");
         }
         else if(strcmp(anim, "onivoro") == 0)
         {
            printf("minhoca\n");
         }
      }
   }
   
   return 0;
}